#pragma once
#include "include.h"

class Ilog
{
public :
	virtual ~Ilog();
	void Set(vector<string>& vec);
	void Get() const;
	Table& TableData();
	void ExportToCsv();
private :
	Table table_;
};


