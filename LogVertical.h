#pragma once
#include "Ilog.h"
#include "LogHorizontal.h"
#include "include.h"

class LogVertical : public Ilog
{
public :
	LogVertical(string& path);
	LogVertical(LogHorizontal& log_horizontal);
	void Comparison(LogVertical& log_vertical);
};