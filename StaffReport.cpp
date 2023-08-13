#include<iostream>
#include "StaffReport.h"
using namespace std;

StaffReport::StaffReport()
{
	Name = "";
	ID = 0;

}

StaffReport::StaffReport(string n, int id)
{
	Name = n;
	ID = id;
}
void StaffReport::setName(string n)
{
	Name = n;
}
void StaffReport::setID(int id)
{
	ID = id;
}

string StaffReport::getName()
{
	return Name;
}

int StaffReport::getID()
{
	return ID;
}