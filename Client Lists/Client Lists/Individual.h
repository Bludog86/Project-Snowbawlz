#ifndef INDIVIDUAL_H_
#define INDIVIDUAL_H_

//headers
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class Individual
{
public:
	// constructors
	Individual();
	Individual(string fn, string ln, double ppn);// minimums
	// copy constructor place holder

	// functions
	// set
	void setFirstName(string fn);
	void setLastName(string ln);
	void setPrimaryPhoneNumber(double ppn);
	void setSecondPhoneNumber(double spn);
	void setEmail(string pcMail);
	void setEmail2(string pcMail);
	void setAddress(string addy);
	void setCity(string cty);
	void setState(string st);
	void setZip(int zp);

	// get
	string getFirstName() const;
	string getLastName() const;
	double getPrimaryPhoneNumber() const;
	double getSecondPhoneNumber() const;
	string getEmail() const;
	string getEmail2() const;
	string getAddress() const;
	string getCity() const;
	string getState() const;
	int getZip() const;
	void printIndividual() const;

	// clear
	void clearData();

private:
	// variables
	string firstName;
	string lastName;
	double phone; // cell phone
	double phone2; // home or work phone number
	string email;
	string email2;
	string address;
	string city;
	string state;
	int zip;
	string adminComments;
};
#endif // !CLIENT_H_