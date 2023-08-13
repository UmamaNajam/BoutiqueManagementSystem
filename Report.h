#pragma once
#include<iostream>
#include<string>
#include "Date.h"
#include<string.h>

using namespace std;

class Report {
	char Type;
	int Score;
	Date date;
public:
	void CalcScore();
	Report();
	Report(char t, int s, Date d);
	void setType(char t);
	void setScore(int s);
	void setDate(Date d);
	char getType();
	int getScore();
	Date getDate();
};
