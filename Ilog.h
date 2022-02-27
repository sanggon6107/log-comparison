#pragma once
#include "include.h"

class Ilog
{
public :
	virtual ~Ilog();
	void Set(vector<string>& vec);
	void Print() const;
	Table& TableData();
	void Export(const string& path) const;
private :
	Table table_;
};


