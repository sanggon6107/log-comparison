#include "Ilog.h"
#include "include.h"

void Ilog::Comparison(Ilog& log_1, Ilog& log_2)
{
	// ¸ÓÁö. 
}

Ilog::~Ilog() {}

void Ilog::Set(vector<string>& vec) { table_.push_back(move(vec)); }
void Ilog::Set(string& str1, string& str2) {  }
void Ilog::Get() const
{
	for (auto& col : table_)
	{
		for (auto& row : col)
		{
			cout << row << " ";
		}
		cout << endl;
	}
}