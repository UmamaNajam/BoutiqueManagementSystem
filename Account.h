#pragma once
#include <string>
#include <string.h>
#include<iostream>

using namespace std;
class account {
	string username;
	string pass;
public:
	account();
	account(string un, string p);
	void login();
	void logout();
	void checkout();
	void set_username(string un);
	void set_password(string p);
	string get_username();
	string get_password();
	~account();
};
