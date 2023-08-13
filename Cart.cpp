#include"Cart.h";
#include"Product.h"
#include<iostream>
using namespace std;

cart::cart()
{
	 
	 bill = 0;
}

cart::cart(int b) 
{
	 bill = b;
	 for (int i = 0; i < 10; i++)
		 items[i] = 0;
}

void cart::set_bill(int b, Product j[]) {
	bill = b;
	for (int i = 0; i < 10; i++)
		items[i] = j[i];
}

int cart::get_bill()
{
	return bill;
}

void cart::add() {

}

void cart::remove(){

}

cart::~cart() {
	bill = 0;
	for (int i = 0; i < 10; i++)
		items[i] = 0;
}