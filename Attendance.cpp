#include "Attendance.h"
#include <string>
#include<ctime>
#include <iostream>
using namespace std;

Attendance::Attendance()
{
	 shift=0;
	 Id=0;
}

Attendance::Attendance(int s, Date d, OurTime t1, OurTime t2, int i) {
	shift=s;
	date=d;
    checkintime=t1;
	checkouttime=t2;
	Id=i;
}

void Attendance::set_shift(int s) {
	shift = s;
}

void Attendance::set_ID(int i) {
	Id = i;
}

void Attendance::set_CheckInTime(OurTime t1) {
	checkintime = t1;
}
void Attendance::set_CheckOutTime(OurTime t2) {
	checkouttime = t2;
}
void Attendance::set_Date(Date d) {
	date = d;
}
int Attendance::get_shift()
{
	return shift;
}

int Attendance::get_Id() {
	return Id;
}

OurTime Attendance::get_CheckInTime() {
	return checkintime;
}

OurTime Attendance::get_CheckOutTime() {
	return checkouttime;
}

Date Attendance::get_date() {
	return date;
}

void Attendance::MarkAttendance() {

}


Attendance::~Attendance()
{
	shift = 0;
	Id = 0;
}