#include "Shift.h"
#include <string>
#include <iostream>
using namespace std;

Shift::Shift()
{
	Name = "";
	Id = 0;
}

Shift::Shift(string n, int i) {
	Name = n;
	Id = i;
}

void Shift::set_Name(string n) {
	Name = n;
}

void Shift::set_ID(int i) {
	Id = i;
}

string Shift::get_name()
{
	return Name;
}

int Shift::get_Id() {
	return Id;
}


void Shift::AddShift() {

}

void Shift::DeleteShift() {

}

Shift::~Shift()
{
	Name = "";
	Id = 0;
}