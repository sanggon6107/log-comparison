#include "Ilog.h"
#include "include.h"

void Ilog::Comparison(Ilog& log_1, Ilog& log_2)
{
	// 머지. 
}

Ilog::~Ilog() {}

void Ilog::Set(vector<string>& vec) { table_.push_back(move(vec)); } // 없어질 예정
void Ilog::Set(string& str1, string& str2) { log_data_[move(str1)] = move(str2); }
void Ilog::Get() const
{
	for (auto& x : log_data_)
	{
		cout << x.first << " " << x.second << endl;
	}
}