#include<iostream>
#include<string>
#include"Date.h"

using namespace std;

Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
}

void Date::setday(int d)
{
	day = d;
}
int Date::getday()
{
	return day;
}

void Date::setmonth(int m)
{
	month = m;
}
int Date::getmonth()
{
	return month;
}

void Date::setyear(int y)
{
	year = y;
}
int Date::getyear()
{
	return year;
}