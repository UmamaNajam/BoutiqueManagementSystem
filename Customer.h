#pragma once
#include<iostream>
#include<string>
#include<string.h>
#include"User.h"

using namespace std;

class Customer : public User {
	string Type;
public:
	void AddCustomer();
	void UpdateCustomer();
	Customer();
	Customer(string str);
	void setType(string str);
	string getType();
};