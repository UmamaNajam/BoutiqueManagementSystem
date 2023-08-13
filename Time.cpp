#include<iostream>
#include<string>
#include"Time.h"
using namespace std;
OurTime::OurTime()
{
	min = 0;
	sec = 0;
	hour = 0;
}
void OurTime::setmin(int min)
{
	this->min = min;
}
void OurTime::setsec(int sec)
{
	this->sec = sec;
}
void OurTime::sethour(int hour)
{
	this->hour = hour;
}
int OurTime::getsec()
{
	return this->sec;
}
int OurTime::getmin()
{
	return this->min;
}
int OurTime::gethour()
{
	return this->hour;
}
OurTime::~OurTime()
{
	min = 0;
	sec = 0;
	hour = 0;
}
