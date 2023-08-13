#pragma once
#include<iostream>
#include"Product.h"
#include<string>
#include<string.h>

using namespace std;

class Order {
	Product* Item;
	int Bill;
public:
	Order();
	Order(int i, int b);
	~Order();
	void Add();
	void Delete();
	void Calc();
	void setItem(int i);
	void setBill(int b);
	Product* getItem();
	int getBill();

};