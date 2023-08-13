#pragma once
#include<iostream>
#include<string>

using namespace std;

class Date {

	int day;
	int month;
	int year;
public:
	Date();
	void setday(int d);
	int getday();
	void setmonth(int m);
	int getmonth();
	void setyear(int y);
	int getyear();


};

