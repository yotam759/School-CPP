#include <iostream>
using namespace std;
#include "User.h"
#include "Status.h"
#include "User.h"



void User::show_User()
{
	cout << "member name:" << this->name << endl;
	birth_date->show_Time();
	//cout << "menber date of bitrh:" << this->birth_date<< endl;
}


void User::add_status_to_member(Status& thestatus)
{
	if (physical_num_of_status == max_Num_Of_status)
	{
		max_Num_Of_status *= 2;
		Status** temp = new Status * [max_Num_Of_status];
		for (int i = 0; i < physical_num_of_status; i++)
			temp[i] = status_list_of_member[i];

		delete[]status_list_of_member;
		status_list_of_member = temp;
	}

	// option 1, save just pointer, and no delete in d'tor!!
	status_list_of_member[physical_num_of_status++] = new Status(thestatus);
}

void User::print_all_status_of_member()
{
	if (physical_num_of_status != 0)
	{
		for (int i = 0; i < physical_num_of_status; i++) //printing the members
		{
			status_list_of_member[i]->show_status();
		}
	}
	else
		cout << "There are no members yet" << endl;


}


