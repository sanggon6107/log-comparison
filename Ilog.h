#pragma once
#include "include.h"

class Ilog
{
public :
	virtual ~Ilog();
	void Comparison(Ilog& log_1, Ilog& log_2);
	void Set(vector<string>& vec);
	void Set(string& str1, string& str2);
	void Get() const;
private :
	Table table_;
};


