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


void LogHorizontal::SymmetryOperation() // ToVertical? ���� ���Կ����ڷ� ���� �����ұ�?
{
	// x, y ��Ī. 
	// ����غ� �� : ���ο� Table �����ϰ� move, emplace_back Ȱ���ؼ� verticalȭ.
}