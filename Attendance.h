#pragma once
#include <string>
#include <string.h>
#include<iostream>
#include "Date.h"
#include "Time.h"

using namespace std;
class Attendance {
	int shift;
	Date date;
	int Id;
	OurTime checkintime;
	OurTime checkouttime;
public:
	Attendance();
	Attendance(int s,Date d,OurTime t1,OurTime t2, int i);
	void set_shift(int s);
	void set_Date(Date d);
	void set_CheckInTime(OurTime t1);
	void set_CheckOutTime(OurTime t2);
	void set_ID(int i);
	int get_shift();
	Date get_date();
	OurTime get_CheckInTime();
	OurTime get_CheckOutTime();
	int get_Id();
	void MarkAttendance();
	~Attendance();
};

