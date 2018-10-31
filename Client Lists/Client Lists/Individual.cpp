#include "Individual.h"

// constructors
Individual::Individual()
{
	string firstName = "";
	string lastName = "";
	double phone = 0; 
	double phone2 = 0; 
	string email = "";
	string email2 = "";
	string address = "";
	string city = "";
	string state = "";
	int zip = 0;
	string adminComments = "";
}

Individual::Individual(string fn, string ln, double ppn)
{
	string firstName = fn;
	string lastName = ln;
	double phone = ppn;
	double phone2 = 0;
	string email = "";
	string email2 = "";
	string address = "";
	string city = "";
	string state = "";
	int zip = 0;
	string adminComments = "";
}

// methods
void Individual::setFirstName(string fn)
{
	firstName = fn;
}

void Individual::setLastName(string ln)
{
	lastName = ln;
}

void Individual::setPrimaryPhoneNumber(double ppn)
{
	phone = ppn;
}

void Individual::setSecondPhoneNumber(double spn)
{
	phone2 = spn;
}

void Individual::setEmail(string pcMail)
{
	email = pcMail;
}

void Individual::setEmail2(string pcMail)
{
	email2 = pcMail;
}

void Individual::setAddress(string addy)
{
	address = addy;
}

void Individual::setCity(string cty)
{
	city = cty;
}

void Individual::setState(string st)
{
	state = st;
}

void Individual::setZip(int zp)
{
	zip = zp;
}

string Individual::getFirstName() const
{
	return firstName;
}

string Individual::getLastName() const
{
	return lastName;
}

double Individual::getPrimaryPhoneNumber() const
{
	return phone;
}

double Individual::getSecondPhoneNumber() const
{
	return phone2;
}

string Individual::getEmail() const
{
	return email;
}

string Individual::getEmail2() const
{
	return email2;
}

string Individual::getAddress() const
{
	return address;
}

string Individual::getCity() const
{
	return city;
}

string Individual::getState() const
{
	return state;
}

int Individual::getZip() const
{
	return zip;
}

void Individual::printIndividual() const
{
	cout << fixed;
	cout << setw(20) << left << "Name: " << lastName << ", " << firstName << endl;
	if (phone != 0)
		cout << "Primary Phone: " << phone << endl;
	if (phone2 != 0)
		cout << setw(20) << left << "Secondary Phone: " << phone2 << endl;
	cout << "Primary Email: " << email << endl;
	if (email2 != "")
		cout << setw(20) << left << "Secondary Email: " << email2 << endl;
	if (address != "")
		cout << setw(20) << left << "Address: " << address << endl;
	if (city != "")
		cout << setw(20) << left << " " << city;
	if (state != "")
		cout << ", " << state;
	if (zip != 0)
		cout << ", " << zip << endl;
	else
		cout << endl;
	if (adminComments != "")
		cout << "Admin Comments: " << adminComments << endl;
}

void Individual::clearData()
{
	string firstName = "";
	string lastName = "";
	double phone = 0;
	double phone2 = 0;
	string email = "";
	string email2 = "";
	string address = "";
	string city = "";
	string state = "";
	int zip = 0;
	string adminComments = "";
}