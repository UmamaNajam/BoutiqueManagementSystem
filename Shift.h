#pragma once
#include <string>
#include <string.h>
#include<iostream>

using namespace std;

class Shift {
	string Name;
	int Id;
public:
	Shift();
	Shift(string n, int i);
	void set_Name(string n);
	void set_ID(int i);
	string get_name();
	int get_Id();
	void AddShift();
	void DeleteShift();
	~Shift();
};

