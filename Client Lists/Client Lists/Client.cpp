#include "Client.h"

Client::Client()
{
	m_applicationDate = new string(""); // date applied to be in VSD
	m_paidApplicationFee = new bool(false); // has paid for the application
	m_paidProgramFee = new bool(false); // has paid for program
	m_feesPaid = new float(0); // paid to the program
	m_individualCost = new float (0); // cost to the program
	m_adminComments = new string ("");
	m_dog = new Dog();
	m_trainer = new Trainer(); // get the trainer of the individual
	m_clientTotalCost = new float(0); // total cost the client has had on the program
	m_missedClasses = new int(0); // total missed classes the client has had
	m_retainer = new float(0); // retainer the client has had to pay
}

Client::Client(string fn, string ln, double ppn, string appDate)
	:Individual(fn, ln, ppn)
{
	m_applicationDate = new string(appDate); // date applied to be in VSD
	m_paidApplicationFee = new bool(false); // has paid for the application
	m_paidProgramFee = new bool(false); // has paid for program
	m_feesPaid = new float(0); // paid to the program
	m_individualCost = new float(0); // cost to the program
	m_adminComments = new string("");
	m_dog = new Dog();
	m_trainer = new Trainer(); // get the trainer of the individual
	m_clientTotalCost = new float(0); // total cost the client has had on the program
	m_missedClasses = new int(0); // total missed classes the client has had
	m_retainer = new float(0); // retainer the client has had to pay
}

Client::Client(const Client & c)
{
	m_applicationDate = new string(*c.m_applicationDate); // date applied to be in VSD
	m_paidApplicationFee = c.m_paidApplicationFee; // has paid for the application
	m_paidProgramFee = c.m_paidProgramFee; // has paid for program
	m_feesPaid = c.m_feesPaid; // paid to the program
	m_individualCost = c.m_individualCost; // cost to the program
	m_adminComments = c.m_adminComments;
	m_dog = c.m_dog;
	m_trainer = c.m_trainer; // get the trainer of the individual
	m_clientTotalCost = c.m_clientTotalCost; // total cost the client has had on the program
	m_missedClasses = c.m_missedClasses; // total missed classes the client has had
	m_retainer = c.m_retainer; // retainer the client has had to pay
}

// functions
void Client::setDog(Dog d)
{
	*m_dog = d;
}

void Client::setTrainer(string trn)
{
	m_trainer->setFirstName(trn);
}

void Client::setPaidApplicationFee()
{
	*m_paidApplicationFee = true;
}

void Client::setApplicationDate(string dt)
{
	*m_applicationDate = dt;
}

void Client::setPaidProgramFee()
{
	*m_paidProgramFee = true;
}

void Client::setFeesPaid(float pd)
{
	*m_feesPaid = pd;
}

void Client::setAdminComments(string ac)
{
	*m_adminComments = ac;
}

void Client::setIndividualCost(float cst)
{
	*m_individualCost = cst;
}

string Client::getDogName() const
{
	return m_dog->getName();
}

string Client::getTrainer() const
{
	return m_trainer->getFirstName();
}

bool Client::getPaidApplicationFee() const
{
	return *m_paidApplicationFee;
}

string Client::getApplicationDate() const
{
	return *m_applicationDate;
}

bool Client::getPaidProgramFee() const
{
	return *m_paidProgramFee;
}

float Client::getFeesPaid() const
{
	return *m_feesPaid;
}

string Client::getAdminComments() const
{
	return *m_adminComments;
}

float Client::getIndividualCost() const
{
	return *m_individualCost;
}

void Client::print() const
{
	Individual::printIndividual();
	cout << setw(20) << left << "Dog Name: " << m_dog->getName() << endl
		<< setw(20) << left << "Trainer: " << m_trainer->getFirstName() << endl;
		// << "Class Level: " << classLevel << endl;
}

void Client::clearData()
{
	string dogName = "";
	string trainer = "";
	string classLevel = "";
	Individual::clearData();
}