#ifndef __USER_H
#define __USER_H

#pragma warning(disable: 4996)

# include "Status.h"
# include "time.h"

class User
{
private:

	char* name;
	Time* birth_date;

	User** friend_list;		 // array of type Friend
	int physical_num_of_friend;
	int max_Num_Of_friends;

	Status** status_list_of_member; // array of type Status
	int physical_num_of_status;
	int max_Num_Of_status;
	
public:
	User(const char* new_name,Time new_birth_date)
	{
		name = new char[strlen(new_name) + 1];
		strcpy(name, new_name);
		birth_date = &new_birth_date;

		physical_num_of_friend = 0;
		max_Num_Of_friends = 2;
		friend_list = new User * [max_Num_Of_friends];

		physical_num_of_status = 0;
		max_Num_Of_status = 2;
		status_list_of_member = new Status * [max_Num_Of_status];
	};


	void show_User();

	void add_status_to_member(Status& thestatus);

	void print_all_status_of_member();

};

#endif // __USER_H
