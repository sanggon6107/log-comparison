#pragma once

#include "Ilog.h"
#include "include.h"

class LogHorizontal : public Ilog
{
public :
	LogHorizontal(string& path);
	void SymmetryOperation();
};

