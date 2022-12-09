#ifndef __FAN_PAGE_H
#define __FAN_PAGE_H

#pragma warning(disable: 4996)

# include "Status.h"
#include "User.h"

class Fan_page
{
private:

	char* fan_page_name;
	User** fan_page_friend_list;		 // array of type Friend
	int physical_num_of_fan_page;
	int max_Num_Of_friend;
	Status** status_list_of_fan_page; // array of type Status
	int physical_num_of_status_fan_page;
	int max_Num_Of_status;

public:
	Fan_page(const char* new_name)
	{
		fan_page_name = new char[strlen(new_name) + 1];
		strcpy(fan_page_name, new_name);

		max_Num_Of_friend = 2;
		physical_num_of_fan_page = 0;

		max_Num_Of_status = 2;
		physical_num_of_fan_page = 0;
	};

	void show_fan_page();
	void add_status_to_fan_page(Status& thestatus);

	void print_all_status_of_fan_page();

};

#endif // __FAN_PAGE_H
#pragma once
