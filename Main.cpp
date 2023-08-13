#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include<iostream>
#include<string>
#include <cstring>
#include <fstream>
#include <sstream>
#include "Account.h"
#include "Cart.h"
#include "Concession.h"
#include "Customer.h"
#include "Date.h"
#include "Order.h"
#include "Outlet.h"
#include "Product.h"
#include "ProductReport.h"
#include "Report.h"
#include "Shift.h"
#include "Staff.h"
#include "StaffReport.h"
#include "User.h"
#include "Outlet.h"
#include <cstring>
using namespace std;

int globalID = 0;
string UserName;

void readOutlets(string name, char**& outlet)
{
	int SIZE = 50;

	for (int i = 0; i < SIZE; i++)
	{
		outlet[i] = new char[100];
	}
	ifstream inFile;
	inFile.open(name.c_str());

	if (inFile.is_open())
	{
		for (int i = 0; i < SIZE; i++)
		{
			inFile >> outlet[i];
			cout << outlet[i];
		}

		inFile.close(); // CLose input file
	}
	else { //Error message
		cerr << "Can't find input file " << endl;
	}

}

void StoreAdminAddOutlet(char& option, char** outlet)
{

	string n, q, r;
	int oid;
	cout << "Enter your name" << endl;
	cin >> n;
	cout << "Qualification" << endl;
	cin >> q;
	cout << "Role" << endl;
	cin >> r;
	cout << "OutletID" << endl;
	cout << "OutletID,Location|Capacity" << endl;
	for (int i = 0; i < 50; i++)
	{
		cout << i + 1 << ") " << outlet[i] << "  ";
	}
	cout << endl;
	cin >> oid;
	StoreAdmin S1(n, q, r, oid, globalID);
	cout << "Enter 1 to manage Outlets" << endl;
	cout << "Enter 2 to manage Users" << endl;
	cin >> option;

	if (option == '1')
	{
		cout << "Enter 1 to add Outlets" << endl;
		cout << "Enter 2 to delete Users" << endl;
		cout << "Enter 3 to modify Outlets" << endl;
		cout << "Enter 4 to block Users" << endl;
		cin >> option;
		if (option == '1')
		{
			cout << "Enter Outlet ID, Location and capacity" << endl;
			int id, cap;
			string loc;
			cin >> id;
			cin >> loc;
			cin >> cap;
			Outlet A(id, loc, cap);
			S1.AddOutlet(A);
			cout << "Added successfully" << endl;
		}
		else
		{
			//functions for rest
		}
	}
	else
	{
		//manage user functionality
	}
}

bool login(fstream& fin, string username, string password)
{
	string filepassword;
	string fileusername;
	char x='0';
	bool success = false;
	int ID = 0;
	while (fin.eof() != true || fin.peek()==fin.eof())
	{
		while (x != ' ')
		{
			fin >>noskipws>> x;
		}
		ID++;
		while (true)
		{
			fin >>noskipws>> x;
			if (x == ' ')
			{
				break;
			}
			fileusername.push_back(x);
		}

		while (true && !fin.eof())
		{
			fin >> noskipws >> x;
			if (x == '\n')
			{
				break;
			}
			filepassword.push_back(x);
		}

			if (fileusername.compare(username)==0 && filepassword.compare(password)==0)
			{
				globalID = ID;
				UserName = username;
				success = true;
				return true;
		    }
			else
			{
				fileusername.clear();
				filepassword.clear();
			}
		
	}

	return success;
}
int getcount()
{
	fstream fin;
	int count = 0;
	char x;
	fin.open("Customers.txt");
	while (!fin.eof())
	{
		fin >>noskipws>> x;
		if (x == '\n')
		{
			count++;
		}
	}
	fin.close();
	return count-1;
}
bool signup(fstream& fin, string username, string password)
{
	char x='0';
	string fileusername;
	bool success = false;
	int idcount = 0;
	int totalids = getcount();
	while (fin.eof() != true)
	{
		while (x != ' ')
		{
			fin >> noskipws >> x;
		}

		while (true)
		{
			
			fin >> noskipws >> x;
			if (x == ' ')
			{
				break;
			}
			fileusername.push_back(x);
		}

		if (fileusername.compare(username) == 0)
		{
			idcount++;
			return false;
		}
		else
		{
			idcount++;
			fileusername.clear();
		}

		while (x != '\n')
		{
			fin >> x;
			if (idcount==totalids && x=='\n')
			{
				fin << idcount+1;
				fin << ' ';
				fin << username;
				fin << ' ';
				fin << password;
				fin << '\n';
				return true;
			}
		}

		

	}

}
void newcustomer()
{
	string username;
	string password;
	fstream fin;
	cout << "Please sign up by creating a new username and password\n";
	cout << "Enter username: ";
	cin >> username;
	cout << "Enter password: ";
	cin >> password;
	fin.open("Customers.txt");
	if (signup(fin, username, password))
	{
		cout << "You have been signed up successfully!" << endl;
	}
	else
	{
		cout << "The username is already in use!!" << endl;
	}
	fin.close();
}

void floormanager()
{
	string username;
	string password;
	fstream fin;
	cout << "Welcome back Floor Manager!! Please sign in\n";
	cout << "Enter your username: ";
	cin >> username;
	cout << "Enter your password: ";
	cin >> password;
	fin.open("FloorManagers.txt");
	if (login(fin, username, password))
	{
		cout << "You have logged in successfully!" << endl;
		cout << "Input outlet number: " << endl;
		int x;
		cin >> x;
		FloorManager S(UserName, "CS", "Floor Manager", x, globalID);
		string id;
		string name;
		string timing;
		cout << "Input employee code for update:" << endl;
		cin >> id;
		cout << "Input employee name for update:" << endl;
		cin >> name;
		cout << "Input employee shift timing for update:" << endl;
		cin >> timing;
		S.Update(id, name,timing);
	}
	else
	{
		cout << "Login failure" << endl;
	}
	fin.close();

}
void inventorymanager()
{
	string username;
	string password;
	fstream fin;
	cout << "Welcome back Inventory Manager!! Please sign in\n";
	cout << "Enter your username: ";
	cin >> username;
	cout << "Enter your password: ";
	cin >> password;
	fin.open("InventoryManagers.txt");
	if (login(fin, username, password))
	{
		cout << "You have logged in successfully!" << endl;

	}
	else
	{
		cout << "Login failure" << endl;
	}
	fin.close();
}

void storemanager()
{
	string username;
	string password;
	fstream fin;
	cout << "Welcome back Store Manager!! Please sign in\n";
	cout << "Enter your username: ";
	cin >> username;
	cout << "Enter your password: ";
	cin >> password;
	fin.open("StoreManagers.txt");
	if (login(fin, username, password))
	{
		cout << "You have logged in successfully!" << endl;
		cout << "You have logged in successfully!" << endl;
		cout << "Input outlet number: " << endl;
		int x;
		cin >> x;
		StoreManager S(UserName, "CS", "Floor Manager", x, globalID);
		S.ViewAttendance();

	}
	else
	{
		cout << "Login failure" << endl;
	}
	fin.close();
}

void salesagent()
{
	string username;
	string password;
	fstream fin;
	cout << "Welcome back Sales Agents!! Please sign in\n";
	cout << "Enter your username: ";
	cin >> username;
	cout << "Enter your password: ";
	cin >> password;
	fin.open("SalesAgents.txt");
	if (login(fin, username, password))
	{
		cout << "You have logged in successfully!" << endl;
		cout << "Enter your outlet Number: " << endl;
		int x;
		cin >> x;
		SalesAgent S(UserName, "CS", "Sales Agent", x, globalID);
		S.MarkAttendence(globalID, UserName, "Sales Agent");
		
	}
	else
	{
		cout << "Login failure" << endl;
	}
	fin.close();
}

void storeadmin()
{
	string username;
	string password;
	fstream fin;
	cout << "Welcome back Store Admin!! Please sign in\n";
	cout << "Enter your username: ";
	cin >> username;
	cout << "Enter your password: ";
	cin >> password;
	fin.open("StoreAdmins.txt");
	if (login(fin, username, password))
	{
		cout << "You have logged in successfully!" << endl;
		char** outlet = new char* [50];
		char option = 's';
		readOutlets("OutletsList.txt", outlet);
		StoreAdminAddOutlet(option, outlet);
	}
	else
	{
		cout << "Login failure" << endl;
	}
	fin.close();
}

void menu()
{
	char option;
	string username;
	string password;
	fstream fin;
	cout << "\t\tWelcome to S&J Boutique\n";
	cout << "Enter c for customer\nEnter s if for staf\n";
	cout << "Enter option : ";
	cin >> option;

	//customer
	if (option == 'c' || option == 'C')
	{
		cout << "Select the following option\n";
		cout << "1 New customer\n";
		cout << "2 Recurring customer\n";
		cout << "3 Browse anonymously\n";
		cin >> option;
		if (option == '1')
		{
			newcustomer();
			//functionality of newcustomer
		}
		else if (option == '2')
		{
			//crate recurring customer obj
			cout << "Welcome back! Please sign in\n";
			cout << "Enter your username: ";
			cin >> username;
			cout << "Enter your password: ";
			cin >> password;
			fin.open("Customers.txt");
			if (login(fin, username, password))
			{
				cout << "You have logged in successfully!" << endl;
			}
			else
			{
				cout << "Login failure" << endl;
			}
			fin.close();
		}

		else if (option == '3')
		{
			//browse anonmously option
		}

		else
		{
			cout << "Incorrect input\n";
			return;
		}

	}

	//staff
	else if (option == 's' || option == 'S')
	{
		cout << "Enter the digit according to your designation\n";
		cout << "1 Store Admin\n";
		cout << "2 Inventory Manager\n";
		cout << "3 Floor Manager\n";
		cout << "4 Store Manager\n";
		cout << "5 Sales Agent\n";
		cout << "Enter Digit : ";
		cin >> option;
		if (option == '1')
		{
			storeadmin();
			//store admin code
		}

		else if (option == '2')
		{
			inventorymanager();
			//inventory manager code
		}

		else if (option == '3')
		{
			
			floormanager();

		}

		else if (option == '4')
		{
			storemanager();
			//store manager code
		}

		else if (option == '5')
		{
			salesagent();
			//sales agent code
		}

		else
		{
			cout << "Error. Incorrect selection\n";
			return;
		}

	}

	else
	{
		cout << "Error. Incorrect selection";
		return;
	}
}

int main()
{
	///*SalesAgent S("Umama", "CS", "Floor Manager", 3, 2);
	//S.MarkAttendence(S.get_SID(), S.get_name(), S.get_role());
	//SalesAgent S2("Daud", "CS", "Store Manager", 3, 1);
	//SalesAgent S3("Ahmad", "CS", "Floor Manager", 3, 3);
	//SalesAgent S4("Hamza", "CS", "Sales Agent", 3, 4);
	//SalesAgent S5("Hamza", "CS", "Store Admin", 3, 5);*/
	//S.MarkAttendence(S2.get_SID(), S2.get_name(), S2.get_role());
	//S.MarkAttendence(S3.get_SID(), S3.get_name(), S3.get_role());
	//S.MarkAttendence(S4.get_SID(), S4.get_name(), S4.get_role());
	
	menu();
	return 0;
}