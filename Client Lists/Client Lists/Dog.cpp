#include "Dog.h"

Dog::Dog()
{
}

void Dog::setName(string nm)
{
	name = nm;
}

void Dog::setHandlerFirstName(string fn)
{
	handlerFirstName = fn;
}

void Dog::setHandlerLastName(string ln)
{
	handlerLastName = ln;
}

void Dog::setAge(int a)
{
	age = a;
}

void Dog::setOrigin(string org)
{
	origin = org;
}

void Dog::setPlacementDate(string place)
{
	placementDate = place;
}

void Dog::setBreed(string brd)
{
	breed = brd;
}

void Dog::setCost(float cst)
{
	cost = cst;
}

void Dog::setTasks(string tsk)
{
	tasks = tsk;
}

void Dog::setIDExpiration(string idex)
{
	idExpiration = idex;
}

void Dog::setPublicAccess(string pa)
{
	publicAccess = true;
}

void Dog::setCertificates(string cert)
{
	certificates = cert;
}

void Dog::setClassLevel(string lvl)
{
	classLevel = lvl;
}
void Dog::print()
{
	cout << "Handler: " << handlerFirstName << " " << handlerLastName << endl
		<< "Dog: " << name << endl
		<< "Age: " << age << endl
		<< "Origin of the Dog: " << origin << endl;
}
string Dog::getName() const
{
	return name;
}
string Dog::getHandlerFirstName() const
{
	return handlerFirstName;
}
string Dog::getHandlerLastName() const
{
	return handlerLastName;
}
int Dog::getAge() const
{
	return age;
}
string Dog::getOrigin() const
{
	return origin;
}
string Dog::getPlacementDate() const
{
	return placementDate;
}
string Dog::getBreed() const
{
	return breed;
}
float Dog::getCost() const
{
	return cost;
}
string Dog::getTasks() const
{
	return tasks;
}
string Dog::getIDExpiration() const
{
	return idExpiration;
}
bool Dog::getPublicAccess() const
{
	return publicAccess;
}
string Dog::getCertificates() const
{
	return certificates;
}
string Dog::getClassLevel() const
{
	return classLevel;
}
