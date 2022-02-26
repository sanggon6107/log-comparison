#include "MergeMngr.h"
#include "include.h"
#include "Ilog.h"
#include "LogVertical.h"


MergeMngr::MergeMngr(LogVertical& log_a, LogVertical& log_b) // 복사본 문제 해결.
{
	for (auto& row_a : log_a.TableData())
	{
		for (auto& row_b : log_b.TableData())
		{
			if (row_a[KEY] == row_b[KEY])
			{
				vector<string> vec_temp = row_a;
				vec_temp.push_back(row_b[VALUE]); 
				vec_temp.push_back(row_b[KEY]);
				Set(vec_temp);
			}
		}
	}
}