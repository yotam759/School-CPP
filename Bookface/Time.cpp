#include <iostream>
using namespace std;


#include "Time.h"


void Time::show_Time()
{
	cout << "birth date:  ";
	cout << this->day <<"/"<<this->month<<"/"<<this->year<< endl;
}