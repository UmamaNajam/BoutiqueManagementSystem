#include<iostream>
#include<string>
#include "Report.h"
using namespace std;

Report::Report()
{
	Type = ' ';
	Score = 0;
}
Report::Report(char t, int s, Date d)
{
	Type = t;
	Score = s;
	date = d;
}

void Report::setDate(Date d)
{
	date = d;
}

void Report::setScore(int s)
{
	Score = s;

}
void Report::setType(char t)
{
	Type = t;
}
Date Report::getDate()
{
	return date;
}
int Report::getScore()
{
	return Score;
}

char Report::getType()
{
	return Type;
}
void Report::CalcScore()
{

}