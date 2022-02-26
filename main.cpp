#include "Ilog.h"
#include "LogHorizontal.h"
#include "LogVertical.h"
#include "MergeMngr.h"
#include "include.h"

int main()
{
	string path = "test.txt";
	string path_horizontal = "test-horizontal.txt";
	LogVertical log(path);
	LogHorizontal log_horizontal(path_horizontal);
	cout << "get(Vertical) : " << endl;
	log.Get();

	cout << "get(Horizontal) : " << endl;
	log_horizontal.Get();

	LogVertical log_converted(log_horizontal);
	log_converted.Get();
	

	MergeMngr joined_log(log, log_converted);
	cout << "joined log : " << endl;
	joined_log.Get();

}