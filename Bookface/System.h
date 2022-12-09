#ifndef __SYSTEM_H
#define __SYSTEM_H

#pragma warning(disable: 4996)

# include "Status.h"
#include "User.h"
#include "Fan_page.h"

class System
{
private:

	Fan_page** fan_page_list;
	User** members_list;		 // array of type Friend
	int physical_num_of_members;
	int maxNumOfmembers;
	int physical_num_of_fan_page;
	int max_num_of_fan_page;

public:
	System()
	{
		physical_num_of_members = 0;
		physical_num_of_fan_page = 0;
		max_num_of_fan_page = 2;
		maxNumOfmembers = 2;
		members_list = new User * [maxNumOfmembers];
	};
	// User func
	void set_member_list(User& thefriend);
	void print_member(int i);
	void add_status_to_member(int loc_of_friend_in_list);
	void print_status_of_member(int loc_of_friend_in_list);
	void add_status_to_fan_page(int loc_of_fan_page_in_list);

	
	void set_fan_page_list(Fan_page& thefanPage);
	void print_fan_page(int i);
	void print_status_of_fan_page(int loc_of_fan_page_in_list);



	~System()
	{
		for (int i = 0; i < physical_num_of_members; i++)
			delete members_list[i];
			delete[]members_list;

		for (int i = 0; i < physical_num_of_fan_page * 2; i++)
			delete fan_page_list[i];
		delete[]fan_page_list;
	}
	

};

#endif // __SYSTEM_H
#pragma once
