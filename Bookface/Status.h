#ifndef __STATUS_H
#define __STATUS_H

#pragma warning(disable: 4996) 
#pragma once
#include "time.h"

class Status 
{
private:

	char* context;
	Time* date;
		
public:

	Status(const char* new_context, Time new_date)
	{
		context = new char[strlen(new_context) + 1];
		strcpy(context, new_context);

		date = &new_date;
	};

	void show_status();


};

#endif // __STATUS_H