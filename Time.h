
#include<iostream>
#include<string>

using namespace std;
class OurTime
{
	int min;
	int sec;
	int hour;
public:
	OurTime();
	void setmin(int min);
	void setsec(int sec);
	void sethour(int hour);
	int getmin();
	int getsec();
	int gethour();
	~OurTime();
	
};