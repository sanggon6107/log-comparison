#pragma once
#include "include.h"
#include "Ilog.h"
#include "LogVertical.h"


class MergeMngr : public Ilog
{
public :
	MergeMngr(LogVertical& log_a, LogVertical& log_b);
};

