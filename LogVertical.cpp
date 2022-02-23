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

		file.close(); // ifstream 객체는 RAII가 적요되어있기 때문에 굳이 close()하지 않아도 블럭 벗어나면 리소스 해제된다.
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