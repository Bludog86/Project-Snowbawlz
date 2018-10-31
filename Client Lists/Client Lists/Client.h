#ifndef CLIENT_H_
#define CLIENT_H_

#include "Individual.h"
#include "Trainer.h"
#include "Dog.h"

class Client :
	public Individual
{
public:
	// constructors
	Client();
	Client(string fn, string ln, double ppn, string appDate); // minimum

	// functions
	void setDog(Dog d);
	void setTrainer(string trn);
	void setPaidApplicationFee();
	void setApplicationDate(string dt);
	void setPaidProgramFee();
	void setFeesPaid(float pd); // paid to the program
	void setAdminComments(string ac);
	void setIndividualCost(float cst); // cost to the program
	string getDogName() const;
	string getTrainer() const;
	bool getPaidApplicationFee() const;
	string getApplicationDate() const;
	bool getPaidProgramFee() const;
	float getFeesPaid() const;
	string getAdminComments() const;
	float getIndividualCost() const;
	void print() const;
	void clearData();

private:
	//variables
	string applicationDate; // date applied to be in VSD
	bool paidApplicationFee = false; // has paid for the application
	bool paidProgramFee = false; // has paid for program
	float feesPaid; // paid to the program
	float individualCost; // cost to the program
	string adminComments;
	Dog dog;
	Trainer trainer; // get the trainer of the individual
	float clientTotalCost; // total cost the client has had on the program
	int missedClasses; // total missed classes the client has had
	float retainer; // retainer the client has had to pay
};
#endif