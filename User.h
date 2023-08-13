#pragma once
#include<iostream>
#include<string>
#include<string.h>

using namespace std;

class User 
{
	string Name;
	int ID;
	string Contact;
	string Address;
public:
	User();
	User(string n, int id, string c, string a);
	void SearchUser();
	void setName(string n);
	void setID(int id);
	void setContact(string c);
	void setAddress(string a);
	string getName();
	int getID();
	string getContact();
	string getAddress();
};