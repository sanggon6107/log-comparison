#include "Ilog.h"
#include "include.h"


Ilog::~Ilog() {}

void Ilog::Set(vector<string>& vec) { table_.push_back(move(vec)); }
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

Table& Ilog::TableData() { return table_; }

void Ilog::ExportToCsv()
{

}