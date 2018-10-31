#ifndef TRAINER_H_
#define TRAINER_H_

// headers
#include "Individual.h"

class Trainer :
	public Individual
{
public:
	// constructors
	Trainer();
	Trainer(string fn, string ln, double ppn, string bzn);

	// functions
	void setBusiness(string bzn);
	string getBusiness() const;
	void clearData();

private:
	// variables
	string business; // name of the business the trainer owns or works at
	float oneOnOneCost; // cost for one hour one on one with a client
	float classCost; // cost for a one hour class
	int classSize; // maximum students per class
};
#endif