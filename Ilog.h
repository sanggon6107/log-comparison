#pragma once
#include "include.h"

class Ilog
{
public :
	virtual ~Ilog();
	void comparison(Ilog& log_1, Ilog& log_2);
	
private :
	Table table_;
};


