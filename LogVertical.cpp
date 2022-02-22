#include "LogVertical.h"
#include "Ilog.h"
#include "include.h"

LogVertical::LogVertical(string& path)
{
	string temp;
	
	ifstream file(path);
	if (!file.is_open()) { cout << "ERROR : file open failed." << endl; }
	else
	{
		while (getline(file, temp, ','))
		{
			vector<string> vector{};
			vector.push_back(move(temp));

			getline(file, temp);
			vector.push_back(move(temp));

			Set(vector);
			
		}

		file.close(); // ifstream 객체는 RAII가 적요되어있기 때문에 굳이 close()하지 않아도 블럭 벗어나면 리소스 해제된다.
	}
}