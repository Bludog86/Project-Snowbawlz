#include "Dog.h"

Dog::Dog()
{
	m_name = new string("");
	m_handlerFirstName = new string("");
	m_handlerLastName = new string("");
	m_age = new int(0);
	m_origin = new string("");
	m_placementDate = new string("");
	m_breed = new string("");
	m_cost = new float(0);
	m_tasks = new string(""); // 3 tasks to perform to qualify as a service dog
	m_idExpiration = new string(""); // when will the Public Access ID expire
	m_publicAccess = new bool(false); // does the handler team have public access
	m_certificates = new string(""); // accomplishments of the dog
	m_classLevel = new string(""); // class level of the handler team as per VSD standards
}

Dog::Dog(string nm, string org)
{
	m_name = new string(nm);
	m_handlerFirstName = new string("");
	m_handlerLastName = new string("");
	m_age = new int(0);
	m_origin = new string(org);
	m_placementDate = new string("");
	m_breed = new string("");
	m_cost = new float(0);
	m_tasks = new string(""); // 3 tasks to perform to qualify as a service dog
	m_idExpiration = new string(""); // when will the Public Access ID expire
	m_publicAccess = new bool(false); // does the handler team have public access
	m_certificates = new string(""); // accomplishments of the dog
	m_classLevel = new string(""); // class level of the handler team as per VSD standards
}

void Dog::setName(string nm)
{
	*m_name = nm;
}

void Dog::setHandlerFirstName(string fn)
{
	*m_handlerFirstName = fn;
}

void Dog::setHandlerLastName(string ln)
{
	*m_handlerLastName = ln;
}

void Dog::setAge(int a)
{
	*m_age = a;
}

void Dog::setOrigin(string org)
{
	*m_origin = org;
}

void Dog::setPlacementDate(string place)
{
	*m_placementDate = place;
}

void Dog::setBreed(string brd)
{
	*m_breed = brd;
}

void Dog::setCost(float cst)
{
	*m_cost = cst;
}

void Dog::setTasks(string tsk)
{
	*m_tasks = tsk;
}

void Dog::setIDExpiration(string idex)
{
	*m_idExpiration = idex;
}

void Dog::setPublicAccess(string pa)
{
	*m_publicAccess = true;
}

void Dog::setCertificates(string cert)
{
	*m_certificates = cert;
}

void Dog::setClassLevel(string lvl)
{
	*m_classLevel = lvl;
}
void Dog::print()
{
	cout << "Handler: " << *m_handlerFirstName << " " << *m_handlerLastName << endl
		<< "Dog: " << *m_name << endl
		<< "Age: " << *m_age << endl
		<< "Origin of the Dog: " << *m_origin << endl;
}
string Dog::getName() const
{
	return *m_name;
}
string Dog::getHandlerFirstName() const
{
	return *m_handlerFirstName;
}
string Dog::getHandlerLastName() const
{
	return *m_handlerLastName;
}
int Dog::getAge() const
{
	return *m_age;
}
string Dog::getOrigin() const
{
	return *m_origin;
}
string Dog::getPlacementDate() const
{
	return *m_placementDate;
}
string Dog::getBreed() const
{
	return *m_breed;
}
float Dog::getCost() const
{
	return *m_cost;
}
string Dog::getTasks() const
{
	return *m_tasks;
}
string Dog::getIDExpiration() const
{
	return *m_idExpiration;
}
bool Dog::getPublicAccess() const
{
	return *m_publicAccess;
}
string Dog::getCertificates() const
{
	return *m_certificates;
}
string Dog::getClassLevel() const
{
	return *m_classLevel;
}
