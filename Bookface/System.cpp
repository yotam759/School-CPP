#include <iostream>
using namespace std;


#include "System.h"
#include "User.h"
#include "Fan_page.h"
#define len_of_arrays 50

//----- User list difene and print--------//
void System::set_member_list(User& thefriend)
{

	if (physical_num_of_members == maxNumOfmembers)
	{
		maxNumOfmembers *= 2;
		User** temp = new User * [maxNumOfmembers];
		for (int i = 0; i < physical_num_of_members; i++)
			temp[i] = members_list[i];

		delete[]members_list;
		members_list = temp;
	}
	// option 1, save just pointer, and no delete in d'tor!!
	//members_list[physical_num_of_members++] = &thefriend;
	/*// option 2, save copy to the songm and DO delete in d'tor*/
	members_list[physical_num_of_members++] = new User(thefriend); 
}


void System::print_member(int i)
{
	members_list[i]->show_User();
}


void System::add_status_to_member(int loc_of_friend_in_list)
{
	char status[len_of_arrays];
	cout << "enter status:" << endl;
	cin >> status;
	cout << "time of publich:" << endl;
	int year, month, day;
	cout << "year of birth" << endl;
	cin >> year;
	cout << "month of birth" << endl;
	cin >> month;
	cout << "day of birth" << endl;
	cin >> day;
	Time* date_of_status = new  Time(year, month, day);
	Status* tmp_status = new Status(status, *date_of_status);
	members_list[loc_of_friend_in_list]->add_status_to_member(*tmp_status);
	delete date_of_status;
	delete tmp_status;
}

void System::print_status_of_member(int loc_of_friend_in_list)
{
	members_list[loc_of_friend_in_list]->print_all_status_of_member();
}


//----- fan page list difene and print--------//

void System::set_fan_page_list(Fan_page& thefanPage)
{

	if (physical_num_of_fan_page == max_num_of_fan_page)
	{
		max_num_of_fan_page *= 2;
		Fan_page** temp = new Fan_page * [max_num_of_fan_page];
		for (int i = 0; i < physical_num_of_fan_page; i++)
			temp[i] = fan_page_list[i];

		delete[]fan_page_list;
		fan_page_list = temp;
	}
	// option 1, save just pointer, and no delete in d'tor!!
	//members_list[physical_num_of_members++] = &thefriend;
	/*// option 2, save copy to the songm and DO delete in d'tor*/
	fan_page_list[physical_num_of_fan_page++] = new Fan_page(thefanPage);
}


void System::print_fan_page(int i)
{
	fan_page_list[i]->show_fan_page();
}


void System::add_status_to_fan_page(int loc_of_fan_page_in_list)
{
	char  status[len_of_arrays];
	cout << "enter status:" << endl;
	cin >> status;
	cout << "time of publich:" << endl;
	int year, month, day;
	cout << "year of birth" << endl;
	cin >> year;
	cout << "month of birth" << endl;
	cin >> month;
	cout << "day of birth" << endl;
	cin >> day;
	Time* date_of_status = new  Time(year, month, day);
	Status* tmp_status = new Status(status, *date_of_status);
	
	fan_page_list[loc_of_fan_page_in_list]->add_status_to_fan_page(*tmp_status);
	delete date_of_status;
	delete tmp_status;
}


void System::print_status_of_fan_page(int loc_of_fan_page_in_list)
{
	fan_page_list[loc_of_fan_page_in_list]->print_all_status_of_fan_page();
}







