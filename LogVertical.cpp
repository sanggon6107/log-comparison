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

	file.close(); // ifstream ��ü�� RAII�� ����Ǿ��ֱ� ������ ���� close()���� �ʾƵ� �� ����� ���ҽ� �����ȴ�.
}