#pragma once
#include "include.h"

class Ilog
{
public :
	virtual ~Ilog();
	void Comparison(Ilog& log_1, Ilog& log_2);
	void Set(vector<string>& vec);
	void Get() const;
	Table& TableData();
private :
	Table table_;
};


