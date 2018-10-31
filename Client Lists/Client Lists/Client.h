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
	Client(const Client& c); // copy

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
	string *m_applicationDate; // date applied to be in VSD
	bool *m_paidApplicationFee; // has paid for the application
	bool *m_paidProgramFee; // has paid for program
	float *m_feesPaid; // paid to the program
	float *m_individualCost; // cost to the program
	string *m_adminComments;
	Dog *m_dog;
	Trainer *m_trainer; // get the trainer of the individual
	float *m_clientTotalCost; // total cost the client has had on the program
	int *m_missedClasses; // total missed classes the client has had
	float *m_retainer; // retainer the client has had to pay
};
#endif