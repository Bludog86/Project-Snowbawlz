#ifndef STAFF_H_
#define STAFF_H_

// headers
#include "Individual.h"

class Staff :
	public Individual
{
public:
	// constructors
	Staff();
	Staff(string fn, string ln, double ppn, string strt, string pos, float pay);

	// functions
	void setStartDate(string strt);
	void setPosition(string pos);
	void setPay(float pay);
	string getStartDate() const;
	string getPosition() const;
	int getHourlyPay() const;
	void clearData();

private:
	// variables
	string startDate; // start date at the company
	string position; // postition
	float hourlyPay; // hourly wages
};
#endif