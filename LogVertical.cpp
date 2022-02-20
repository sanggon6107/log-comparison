#include "LogVertical.h"
#include "Ilog.h"
#include "include.h"

LogVertical::LogVertical(string path)
{
	string line;
	ifstream file(path);
	

	if ( !file.is_open() )
	{
		cout << "ERROR : file open failed." << endl;
	}

	while (getline(file, line, ','))
	{
		vector<string> vector{};
		vector.push_back(line);
		cout << line;

		getline(file, line);
		vector.push_back(line);
		cout << line << endl;

		Set(vector);
	}

	file.close(); // ifstream 객체는 RAII가 적요되어있기 때문에 굳이 close()하지 않아도 블럭 벗어나면 리소스 해제된다.
}