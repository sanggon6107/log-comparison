#include "LogVertical.h"
#include "Ilog.h"
#include "include.h"

LogVertical::LogVertical(string& path)
{
	string line; // ���� �ʿ������ ����
	string data_key;
	string data_value;
	
	ifstream file(path);
	if (!file.is_open()) { cout << "ERROR : file open failed." << endl; }
	else
	{
		while (getline(file, data_key, ','))
		{
			//vector<string> vector{}; // ������ ����
			//vector.push_back(line); // ������ ����

			//cout << line; // ������ ����

			getline(file, data_value);
			//vector.push_back(line); // ������ ����
			//cout << line << endl;  // ������ ����
			cout << data_key << " " << data_value << endl;
			//Set(vector); // ������ ����
			Set(data_key, data_value);
			
			
		}

		file.close(); // ifstream ��ü�� RAII�� ����Ǿ��ֱ� ������ ���� close()���� �ʾƵ� �� ����� ���ҽ� �����ȴ�.
	}
}