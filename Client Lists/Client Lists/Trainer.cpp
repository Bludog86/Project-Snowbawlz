#include "Trainer.h"

Trainer::Trainer()
{
	business = "";
}

Trainer::Trainer(string fn, string ln, double ppn, string bzn)
	:Individual(fn, ln, ppn)
{
	business = bzn;
}

// functions
void Trainer::setBusiness(string bzn)
{
	business = bzn;
}

string Trainer::getBusiness() const
{
	return business;
}

void Trainer::clearData()
{
	business = "";
	Individual::clearData();
}