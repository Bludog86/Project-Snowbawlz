#ifndef DOG_H_
#define DOG_H_

#include<iostream>
#include<string>

using namespace std;

class Dog
{
public:
	// constructors
	Dog();
	Dog(string nm, string org); // minimum

	// functions
	// set
	void setName(string nm);
	void setHandlerFirstName(string fn);
	void setHandlerLastName(string ln);
	void setAge(int a);
	void setOrigin(string org);
	void setPlacementDate(string place);
	void setBreed(string brd);
	void setCost(float cst);
	void setTasks(string tsk);
	void setIDExpiration(string idex);
	void setPublicAccess(string pa);
	void setCertificates(string cert);
	void setClassLevel(string lvl);
	void print();

	// get
	string getName() const;
	string getHandlerFirstName() const;
	string getHandlerLastName() const;
	int getAge() const;
	string getOrigin() const;
	string getPlacementDate() const;
	string getBreed() const;
	float getCost() const;
	string getTasks() const;
	string getIDExpiration() const;
	bool getPublicAccess() const;
	string getCertificates() const;
	string getClassLevel() const;

private:
	string *m_name;
	string *m_handlerFirstName;
	string *m_handlerLastName;
	int *m_age;
	string *m_origin;
	string *m_placementDate;
	string *m_breed;
	float *m_cost;
	string *m_tasks; // 3 tasks to perform to qualify as a service dog
	string *m_idExpiration; // when will the Public Access ID expire
	bool *m_publicAccess; // does the handler team have public access
	string *m_certificates; // accomplishments of the dog
	string *m_classLevel; // class level of the handler team as per VSD standards
};
#endif // !DOG_H_