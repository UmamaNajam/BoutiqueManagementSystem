#pragma once
#include <string>
#include <string.h>
#include<iostream>

using namespace std;

class concession {
	int amount;
public:
	concession();
	concession(int a);
	virtual void calc();
	void set_amount(int a);
	int get_amount();
	~concession();
};

class discount : public concession {
	string campaingn;
	string code;
	int Discount;

public:
	discount();
	discount(string cam, string co, int d,int a);
	void calc();
	void set_campaingn(string cam);
	void set_code(string co);
	void set_discount(int d);
	string get_campaign();
	string get_code();
	int get_discount();
	~discount();
};

class loyaltycard : public concession {
	int ID;
	string name;
public:
	loyaltycard();
	loyaltycard(string n, int id,int a);
	void calc();
	void set_ID(int id);
	void set_name(string name);
	string get_name();
	int get_ID();
	~loyaltycard();
};

class gold : public loyaltycard {
	int percentage;
public:
	gold();
	gold(int p,string n, int id, int a);
	void set_percetage(int p);
	void calc();
	int get_percentage();
	~gold();
};

class silver : public loyaltycard {
	int percentage;
public:
	silver();
	silver(int p, string n, int id, int a);
	void set_percetage(int p);
	void calc();
	int get_percentage();
	~silver();
};

class platinum : public loyaltycard {
	int percentage;
public:
	platinum();
	platinum(int p, string n, int id, int a);
	void set_percetage(int p);
	void calc();
	int get_percentage();
	~platinum();
};