#include "LogVertical.h"
#include "Ilog.h"
#include "include.h"

LogVertical::LogVertical(string& path)
{
	string line; // 향후 필요없어질 예정
	string data_key;
	string data_value;
	
	ifstream file(path);
	if (!file.is_open()) { cout << "ERROR : file open failed." << endl; }
	else
	{
		while (getline(file, data_key, ','))
		{
			//vector<string> vector{}; // 없어질 예정
			//vector.push_back(line); // 없어질 예정

			//cout << line; // 없어질 예정

			getline(file, data_value);
			//vector.push_back(line); // 없어질 예정
			//cout << line << endl;  // 없어질 예정
			cout << data_key << " " << data_value << endl;
			//Set(vector); // 없어질 예정
			Set(data_key, data_value);
			
			
		}

		file.close(); // ifstream 객체는 RAII가 적요되어있기 때문에 굳이 close()하지 않아도 블럭 벗어나면 리소스 해제된다.
	}
}