#include <iostream>
using namespace std;
#include "Status.h"


void Status::show_status()
{

	cout << "status:" << this->context << endl;
	date->show_Time();
}


