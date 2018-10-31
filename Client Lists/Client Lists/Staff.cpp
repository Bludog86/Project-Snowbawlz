#include "Staff.h"

// constructors
Staff::Staff()
{
	string startDate = "";
	string position = "";
	float hourlyPay = 0;
}

Staff::Staff(string fn, string ln, double ppn, string strt, string pos, float pay)
	:Individual(fn, ln, ppn)
{
	string startDate = strt;
	string position = pos;
	float hourlyPay = pay;
}


// functions
void Staff::setStartDate(string strt)
{
	startDate = strt;
}

void Staff::setPosition(string pos)
{
	position = pos;
}

void Staff::setPay(float pay)
{
	hourlyPay = pay;
}

string Staff::getStartDate() const
{
	return startDate;
}

string Staff::getPosition() const
{
	return position;
}

int Staff::getHourlyPay() const
{
	return hourlyPay;
}

void Staff::clearData()
{
	startDate = "";
	position = "";
	hourlyPay = 0;
	Individual::clearData();
}