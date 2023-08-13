#include <string>
#include <string.h>
#include"Concession.h";

using namespace std;

concession::concession()
{
	amount = 0;
}

concession::concession(int a)
{
	amount = a;
}

void concession::calc()
{

}

void concession::set_amount(int a)
{
	amount = a;
}

int concession::get_amount()
{
	return amount;
}

concession::~concession()
{
	amount = 0;
}

discount::discount()
{
	//concession();
	campaingn = "";
	code = "";
	Discount = 0;
}

discount::discount(string cam, string co, int d, int a) : concession(a)
{
	campaingn = cam;
	code = co;
	Discount = d;
}


void discount::calc()
{
}

void discount::set_campaingn(string cam)
{
	campaingn = cam;
}

void discount::set_code(string co)
{
	code = co;
}

void discount::set_discount(int d)
{
	Discount = d;
}

string discount::get_campaign()
{
	return campaingn;
}

string discount::get_code()
{
	return code;
}

int discount::get_discount()
{
	return Discount;
}

discount::~discount()
{
	campaingn = "";
	code = "";
	Discount = 0;
}

loyaltycard::loyaltycard()
{
	name = "";
	ID = 0;
}

loyaltycard::loyaltycard(string n, int id, int a) : concession(a)
{
	name = n;
	ID = id;
}


void loyaltycard::calc()
{
}

void loyaltycard::set_ID(int id)
{
	ID = id;
}

void loyaltycard::set_name(string n)
{
	this->name = n;
}

string loyaltycard::get_name()
{
	return name;
}

int loyaltycard::get_ID()
{
	return ID;
}

loyaltycard::~loyaltycard()
{
	name = "";
	ID = 0;
}

gold::gold()
{
	percentage = 0;
}

gold::gold(int p,string n, int id, int a) : loyaltycard(n,id,a)
{
	percentage = p;
}


void gold::set_percetage(int p)
{
	percentage = p;
}

void gold::calc()
{
}

int gold::get_percentage()
{
	return percentage;
}

gold::~gold()
{
	percentage = 0;
}

silver::silver()
{
	percentage = 0;
}

silver::silver(int p,string n, int id, int a) : loyaltycard(n, id, a)
{
	percentage = p;
}

void silver::set_percetage(int p)
{
	percentage = p;
}


void silver::calc()
{
}

int silver::get_percentage()
{
	return percentage;
}

silver::~silver()
{
	percentage = 0;
}

platinum::platinum()
{
}

platinum::platinum(int p, string n, int id, int a) : loyaltycard(n, id, a)
{
	percentage = p;
}

void platinum::set_percetage(int p)
{
	percentage = p;
}

void platinum::calc()
{
}

int platinum::get_percentage()
{
	return percentage;
}

platinum::~platinum()
{
	percentage = 0;
}
