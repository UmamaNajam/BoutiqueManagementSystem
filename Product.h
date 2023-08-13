#pragma once
#include<iostream>
#include<string>
#include<string>

using namespace std;

class Product {
	string Name;
	int Reserve;
	int Price;
	string Code;
	int* Count;
	int* OutletID;
public:
	void SearchProduct();
	Product();
	Product(string n, int r, int p, string c, int count, int id);
	void setName(string n);
	void setReserve(int n);
	void setPrice(int p);
	void setCode(string c);
	void setCount(int c);
	void setOutlet(int n);
	string getName();
	int getReserve();
	int getPrice();
	string getCode();
	int* getCount();
	int* getOutlet();
	void operator =(int rhs);
	~Product();
};
