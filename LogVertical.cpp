#include "LogVertical.h"
#include "LogHorizontal.h"
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

		file.close(); // ifstream ��ü�� RAII�� ����Ǿ��ֱ� ������ ���� close()���� �ʾƵ� �� ����� ���ҽ� �����ȴ�.
	}
}


LogVertical::LogVertical(LogHorizontal& log_horizontal)
{
	for (int i = 0; i < log_horizontal.TableData()[static_cast<int>(KeyVal::KEY)].size(); i++)
	{
		vector<string> temp;
		temp.push_back(move(log_horizontal.TableData()[static_cast<int>(KeyVal::KEY)][i]));
		temp.push_back(move(log_horizontal.TableData()[static_cast<int>(KeyVal::VALUE)][i]));

		Set(temp);
	}
}