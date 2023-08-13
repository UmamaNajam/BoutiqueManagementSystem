#include <iostream>
#include <fstream>
#include<string>
#include<string.h>
#include"Outlet.h";
using namespace std;
Outlet::Outlet()
{
	ID = 0;
	Location = "";
	Capacity = 0;
}

Outlet::Outlet(int id, string loc, int cap)
{
	ID = id;
	Location = loc;
	Capacity = cap;
}

void Outlet::AddOutlet()
{
	ofstream fout;  // Create Object of Ofstream
	ifstream fin;

	fout.open("OutletsList.txt", ios::app | ios::out); // Append mode and write
	if (fout.is_open())
		fout << ID << "," << Location << "|" << Capacity << endl;

	fout.close(); // Closing the file
}

void Outlet::UpdateOutlet()
{

}
void Outlet::BlockOutlet()
{

}
void Outlet::DeleteOutlet()
{

}

void Outlet::setCapacity(int cap)
{
	Capacity = cap;
}
void Outlet::setID(int id)
{
	ID = id;
}

void Outlet::setLocation(string loc)
{
	Location = loc;
}

int Outlet::getCapacity()
{
	return Capacity;
}

int Outlet::getID()
{
	return ID;
}

string Outlet::getLocation()
{
	return Location;
}