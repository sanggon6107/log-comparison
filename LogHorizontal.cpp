#include "LogHorizontal.h"
#include "Ilog.h"
#include "include.h"

LogHorizontal::LogHorizontal(string& path)
{
	ifstream file(path);
	if (!file.is_open()) { cout << "ERROR : file open failed." << endl; }
	else
	{
		regex re(", ");
		string line;
		while ( getline(file, line) )
		{
			auto itr = sregex_token_iterator(begin(line), end(line), re, -1);
			auto itr_end = sregex_token_iterator();
			vector<string> vector;
			while (itr != itr_end)
			{
				vector.emplace_back(itr->str());
				++itr;
			}
			Set(vector);
		}
	}
} 


void LogHorizontal::SymmetryOperation() // ToVertical? 무브 대입연산자로 구현 가능할까?
{
	// x, y 대칭. 
	// 고려해볼 것 : 새로운 Table 선언하고 move, emplace_back 활용해서 vertical화.
}