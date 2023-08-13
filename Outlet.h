#pragma once
#pragma once
#include<iostream>
#include<string>
#include<string.h>
using namespace std;


class Outlet {
	int ID;
	string Location;
	int Capacity;

public:
	Outlet();
	Outlet(int id, const string loc, int cap);
	void AddOutlet();
	void DeleteOutlet();
	void BlockOutlet();
	void UpdateOutlet();
	void setID(int id);
	void setLocation(string str);
	void setCapacity(int cap);
	int getID();
	string getLocation();
	int getCapacity();

};