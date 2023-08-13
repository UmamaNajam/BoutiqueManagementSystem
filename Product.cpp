#include<iostream>
#include<string>
#include "Product.h"
using namespace std;

Product::Product()
{
	Name = "";
	Reserve = 0;
	Price = 0;
	Code = "";
	Count =nullptr ;
	OutletID = nullptr;
}

Product::Product(string n, int r, int p, string c, int count, int id)
{
	Name = n;
	Reserve = r;
	Price = p;
	Code = c;
	Count = new int[count];
	OutletID = new int[id];
}
Product::~Product()
{
	delete[] Count;
	Count = nullptr;
	delete[] OutletID;
	OutletID = nullptr;
}

void Product::setName(string n)
{
	Name = n;
}

void Product::setReserve(int n)
{
	Reserve = n;
}
void Product::setPrice(int p)
{
	Price = p;
}
void Product::setCode(string c)
{
	Code = c;
}
void Product::setCount(int c)
{
	Count = new int[c];
}
void Product::setOutlet(int n)
{
	OutletID = new int[n];
}
string Product:: getName()
{
	return Name;
}
int Product::getReserve()
{
	return Reserve;
}
int Product::getPrice()
{
	return Price;
}
string Product::getCode()
{
	return Code;
}
int* Product::getCount()
{
	return Count;
}
int* Product::getOutlet()
{
	return OutletID;
}

void Product::operator=(int rhs)
{
	this->Reserve = 0;
	this->Price = 0;
	this->Count = 0;
	this->OutletID = 0;
}
