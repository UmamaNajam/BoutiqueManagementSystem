#include<iostream>
#include<string>
#include<string.h>
#include"Order.h"
using namespace std;

Order::Order()
{
	Item = nullptr;
	Bill = 0;
}

Order::Order(int i, int b)
{
	Item = new Product[i];
	Bill = b;
}

Order::~Order()
{
	delete[] Item;
	Item = nullptr;
}
void Order::Add()
{

}
void Order::Calc()
{

}
void Order::Delete()
{

}

void Order::setBill(int b)
{
	Bill = b;
}
void Order::setItem(int i)
{
	Item = new Product[i];
}

int Order::getBill()
{
	return Bill;
}
Product* Order::getItem()
{
	return Item;
}