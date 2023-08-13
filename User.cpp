#include<iostream>
#include"User.h"
#include<string>
#include<string.h>
using namespace std;


User::User()
{
	Name = "";
	ID = 0;
	Contact = "";
	Address = "";
}
User::User(string n, int id, string c, string a)
{
	Name = n;
	ID = id;
	Contact = c;
	Address = a;
}
void User::SearchUser()
{

}
void User::setAddress(string a)
{
	Address = a;

}
void User::setContact(string c)
{
	Contact = c;
}
void User::setID(int id)
{
	ID = id;
}
void User::setName(string n)
{
	Name = n;
}
string User::getAddress()
{
	return Address;
}
string User::getContact()
{
	return Contact;
}
string User::getName()
{
	return Name;
}
int User::getID()
{
	return ID;
}