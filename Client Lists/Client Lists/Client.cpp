#include "Client.h"

Client::Client()
{
	string applicationDate = ""; // date applied to be in VSD
	bool paidApplicationFee = false; // has paid for the application
	bool paidProgramFee = false; // has paid for program
	float feesPaid = 0; // paid to the program
	float individualCost = 0; // cost to the program
	string adminComments = "";
	Dog dog;
	Trainer trainer; // get the trainer of the individual
	float clientTotalCost = 0; // total cost the client has had on the program
	int missedClasses = 0; // total missed classes the client has had
	float retainer = 0; // retainer the client has had to pay
}
Client::Client(string fn, string ln, double ppn, string appDate)
	:Individual(fn, ln, ppn)
{
	string applicationDate = appDate; // date applied to be in VSD
	bool paidApplicationFee = false; // has paid for the application
	bool paidProgramFee = false; // has paid for program
	float feesPaid = 0; // paid to the program
	float individualCost = 0; // cost to the program
	string adminComments = "";
	Dog dog;
	Trainer trainer; // get the trainer of the individual
	float clientTotalCost = 0; // total cost the client has had on the program
	int missedClasses = 0; // total missed classes the client has had
	float retainer = 0; // retainer the client has had to pay

}

// functions
void Client::setDog(Dog d)
{
	dog = d;
}

void Client::setTrainer(string trn)
{
	trainer.setFirstName(trn);
}

void Client::setPaidApplicationFee()
{
	paidApplicationFee = true;
}

void Client::setApplicationDate(string dt)
{
	applicationDate = dt;
}

void Client::setPaidProgramFee()
{
	paidProgramFee = true;
}

void Client::setFeesPaid(float pd)
{
	feesPaid = pd;
}

void Client::setAdminComments(string ac)
{
	adminComments = ac;
}

void Client::setIndividualCost(float cst)
{
	individualCost = cst;
}

string Client::getDogName() const
{
	return dog.getName();
}

string Client::getTrainer() const
{
	return trainer.getFirstName();
}

bool Client::getPaidApplicationFee() const
{
	return paidApplicationFee;
}

string Client::getApplicationDate() const
{
	return applicationDate;
}

bool Client::getPaidProgramFee() const
{
	return paidProgramFee;
}

float Client::getFeesPaid() const
{
	return feesPaid;
}

string Client::getAdminComments() const
{
	return adminComments;
}

float Client::getIndividualCost() const
{
	return individualCost;
}

void Client::print() const
{
	Individual::printIndividual();
	cout << setw(20) << left << "Dog Name: " << dog.getName() << endl
		<< setw(20) << left << "Trainer: " << trainer.getFirstName() << endl;
		// << "Class Level: " << classLevel << endl;
}

void Client::clearData()
{
	string dogName = "";
	string trainer = "";
	string classLevel = "";
	Individual::clearData();
}