#include <iostream>
#include <string>



using namespace std;


#include "User.h"
#include "System.h"

#define len_of_arrays 50


void main()
{
	System system;
	bool exit = true;
	char choice;
	int user_click, num_of_members=0,members_num = 0, member_to_connect=0, num_of_fan_page=0;
	char name[len_of_arrays] , date_of_bitrh[len_of_arrays], date_of_status[len_of_arrays], status[len_of_arrays];
	int year, month, day;
	while (exit)
	{
		

		cout << "---------------------------------------- " << endl;
		cout << "Press 0 connect to different member " << endl;
		cout << "Press 1 to add a member / fan page " << endl;
		cout << "Press 2 to show all the members / fan page" << endl;
		cout << "Press 3 to add status to member / fan page " << endl;
		cout << "Press 4 to show all the member status / fan page status " << endl;
		cout << "Press 5 to add friend " << endl;
		cout << "Press 6 to show all the friend of memeber "<<members_num << endl;
		cout << "Press 7 to exit " << endl;

		cout << "you are connect to members number " << members_num << endl;

		cin >> user_click;
		
		switch (user_click)
		{

		case 0:
		{
			cout << "choose witch member number you want to connect:" << endl;
			cin >> members_num;

			break;
		}
		case 1:
		{
			cout << "please enter - m to add memeber" << endl;
			cout << "please enter - f to add memeber" << endl;
			cin >> choice;

			if (choice == 'f')
			{
				num_of_fan_page = num_of_fan_page + 1;
				cin.get();
				cout << "fan page name:" << endl;
				cin >> name;
				Fan_page tmp_fan_page(name);

				system.set_fan_page_list(tmp_fan_page); 
			}

			else if (choice == 'm')
			{
				num_of_members = num_of_members + 1;
				cin.get();
				cout << "member name:" << endl;
				//cin >> name;
				cin.getline(name, len_of_arrays);
				cout << "member date of birth:" << endl;
				cout << "year of birth" << endl;
				cin >> year;
				cout << "month of birth" << endl;
				cin >> month;
				cout << "day of birth" << endl;
				cin >> day;
				Time* tmp_time = new  Time(year, month, day);
				User* tmp = new User(name, *tmp_time);
				
				system.set_member_list(*tmp);

				delete tmp;
				delete tmp_time;
				
			}
			else{}

			break;
		}
		case 2:
		{
			cout << "please enter - m to add memeber" << endl;
			cout << "please enter - f to add fan page" << endl;
			cin >> choice;

			if (choice == 'f')
			{
				if (num_of_fan_page != 0)
				{
					for (int i = 0; i < num_of_fan_page; i++) //printing the members
					{
						system.print_fan_page(i);
						cout << "fan page number " << i << endl;
						cout << "-- " << endl;
						cout << endl;
					}
				}
				else
					cout << "There are no members yet" << endl;
			}
			else if (choice == 'm')
			{
				cout << "****************************" << endl;
				cout << "Bookface has: " << num_of_members<< "members" << endl <<endl;
				if (num_of_members != 0)
				{
					for (int i = 0; i < num_of_members; i++) //printing the members
					{
						system.print_member(i);
						cout << "member number " << i << endl;
						cout << "-- " << endl;
						cout << endl;
					}
				}
				else
					cout << "There are no members yet" << endl;

				
			}
			break;
		}
		case 3:
		{
			cout << "please enter - m to add memeber status" << endl;
			cout << "please enter - f to add fan page status" << endl;
			cin >> choice;

			if (choice == 'm')
			{
				
				system.add_status_to_member(members_num);

			}
			else if (choice == 'f')
			{
				
				system.add_status_to_fan_page(members_num);

			}
			break;
		}
		case 4:
		{
			cout << "please enter - m to add memeber status" << endl;
			cout << "please enter - f to add fan page status" << endl;
			cin >> choice;

			if (choice == 'm')
			{
				system.print_status_of_member(members_num);
			}
			else if (choice == 'f')
			{

				system.print_status_of_fan_page(members_num);

			}

			break;
		}
		case 5:
		{
			cout << "the member you connect is:"<<members_num << endl;
			cout << "witch memeber you want to connect:";
			cin >> member_to_connect;
			//user.add_friend(members_num, member_to_connect);

			break;
		}

		case 6:
		{

			cout << "the User in BookFace is:"<<endl;

			//system.print_friends_members(members_num);

			break;
		}
		case 7:
			exit = false;
		

		}
	}

}