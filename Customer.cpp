#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include "Customer.h"

using namespace std;

void Customer::AddCustomer()
{

}
void Customer::UpdateCustomer()
{

}
Customer::Customer()
{
	Type = "";
}
Customer::Customer(string str)
{
	Type = str;
}

void Customer::setType(string str)
{
	Type = str;
}
string Customer::getType()
{
	return Type;
}


