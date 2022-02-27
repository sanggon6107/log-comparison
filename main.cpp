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
	cout << "Print(Vertical) : " << endl;
	log.Print();

	cout << "Print(Horizontal) : " << endl;
	log_horizontal.Print();

	LogVertical log_converted(log_horizontal);
	log_converted.Print();
	

	MergeMngr joined_log(log, log_converted);
	cout << "joined log : " << endl;
	joined_log.Print();

	joined_log.Export("joined_log.txt");

}