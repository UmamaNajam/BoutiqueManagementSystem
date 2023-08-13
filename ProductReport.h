#pragma once
#include<iostream>
#include<string>
#include<string.h>
#include "Report.h"

using namespace std;

class ProductReport: public Report 
{

private:
	string Name;
	string Code;
public:
	void CalcScore();
	ProductReport();
	ProductReport(string n, string);
	void setName(string n);
	void setCode(string c);
	string getName();
	string getCode();
};