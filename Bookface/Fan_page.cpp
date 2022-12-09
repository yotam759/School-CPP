#include <iostream>
using namespace std;
#include "System.h"
#include "Status.h"
#include "User.h"
#include "Fan_page.h"



void Fan_page::show_fan_page()
{
	cout << "the fan page name: " <<this->fan_page_name<< endl;

}


void Fan_page::add_status_to_fan_page(Status& thestatus)
{
	if (physical_num_of_status_fan_page == max_Num_Of_status)
	{
		max_Num_Of_status *= 2;
		Status** temp = new Status * [max_Num_Of_status];
		for (int i = 0; i < physical_num_of_status_fan_page; i++)
			temp[i] = status_list_of_fan_page[i];

		delete[]status_list_of_fan_page;
		status_list_of_fan_page = temp;
	}

	// option 1, save just pointer, and no delete in d'tor!!
	status_list_of_fan_page[physical_num_of_status_fan_page++] = new Status(thestatus);
}


void Fan_page::print_all_status_of_fan_page()
{
	if (physical_num_of_fan_page != 0)
	{
		for (int i = 0; i < physical_num_of_fan_page; i++) //printing the members
		{
			status_list_of_fan_page[i]->show_status();
		}
	}
	else
		cout << "There are no members yet" << endl;


}