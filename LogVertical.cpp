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

void LogVertical::Comparison(LogVertical& log_vertical)
{
	// 한계 : TableData()와 맞는 것을 log_vertical에서 찾지 못하면 비교하지 못한채로 놔둔다.
	//		  새로운 테이블 만들어야?
	for (int this_idx = 0; this_idx < TableData().size(); this_idx++)
	{
		for (int log_idx = 0; log_idx < this_idx; log_idx++)
		{
			if (TableData()[this_idx][0] == log_vertical.TableData()[log_idx][0] && TableData()[this_idx][0] != "")
			{
				// TableData()[this_idx].insert(end(TableData()[this_idx]), begin(TableData()[log_idx]), end(TableData()[log_idx]));
				TableData()[this_idx].push_back( move(log_vertical.TableData()[log_idx][1]) );
				TableData()[this_idx].push_back( move(log_vertical.TableData()[log_idx][0]) );
			}
		}
	}

	ExportToCsv();
}