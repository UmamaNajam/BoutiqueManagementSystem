#pragma once
#pragma once
#include<iostream>
#include<string>
#include<string.h>
#include "Report.h"

using namespace std;
class StaffReport : public Report
{
	string Name;
	int ID;
public:
	StaffReport();
	StaffReport(string n, int id);
	void setName(string n);
	void setID(int id);
	string getName();
	int getID();
};