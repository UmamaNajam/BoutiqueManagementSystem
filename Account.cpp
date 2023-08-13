#include <string>
#include <iostream>
#include "Account.h"
using namespace std;

account::account()
{
	username = "";
	pass = "";
}

account::account(string un,string  p) {
	username = un;
	pass = p;
}

void account::set_username(string un) {
	username = un;
}

void account::set_password(string p) {
	pass = p;
}

string account::get_username()
{
	return username;
}

string account::get_password(){
	return pass;
}


void account::login() {

}

void account::logout() {

}

void account::checkout() {

}

account::~account()
{
	username = "";
	pass = "";
}