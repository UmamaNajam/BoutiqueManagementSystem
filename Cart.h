#pragma once
#include <iostream>
#include "Product.h"
using namespace std;
class cart {
	int bill;
	Product items[10];
public:
	void add();
	void remove();
	cart();
	cart(int b);
	void set_bill(int b, Product j[]);
	int get_bill();
	~cart();
 };