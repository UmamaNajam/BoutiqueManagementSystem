#include<iostream>
#include"ProductReport.h"
#include"Report.h"
using namespace std;

void ProductReport::CalcScore()
{

}

ProductReport::ProductReport()
{
	Name = "";
	Code = "";
}
ProductReport::ProductReport(string n, string c)
{
	Name = n;
	Code = c;
}

void ProductReport::setName(string n)
{
	Name = n;
}
void ProductReport::setCode(string c)
{
	Code = c;
}
string ProductReport:: getName()
{
	return Name;
}
string ProductReport::getCode()
{
	return Code;
}