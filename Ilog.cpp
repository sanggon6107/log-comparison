#include "Ilog.h"
#include "include.h"


Ilog::~Ilog() {}

void Ilog::Set(vector<string>& vec) { table_.push_back(move(vec)); }
void Ilog::Print() const
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

void Ilog::Export(const string& path) const
{
	ofstream file;
	file.open(path);

	for (auto& col : table_)
	{
		auto itr = begin(col);
		auto itr_end = end(col);

		file << *(itr++);
		while (itr != itr_end)
		{
			file << "," << *(itr++);
		}
		file << endl;
	}

	file.close();
}