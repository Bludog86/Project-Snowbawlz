/******************************************************************************************************************************************************/
// Author: Austin Blewer
// Client: Victory Service Dogs
// Date started: 10/16/2018
// Purpose 1:  This program will read in data from a file about clients and trainers, and print the data to another file
// Purpose 1.1: This Program will sort the data and print select data to individuals
// Purpose 2:  This program will analyze the data to show costs for each individual
/******************************************************************************************************************************************************/

// headers
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>
#include <stdlib.h>

// class headers
#include"Individual.h"
#include"Client.h"
#include"Staff.h"
#include"Trainer.h"
#include"Dog.h"

// namespaces
using namespace std;

// function declarations sorted alphabetically
void getClientData(fstream& clntLst, vector<Client>& clnt, vector<Dog>& dg, int& cnt);
void menu(ofstream& clntLst, vector<Client>& clnt, vector<Dog>& dg);
void printData(vector<Client>& client);
void printDogData(vector<Dog>& client);
void returnToMenu(ofstream& clntLst, vector<Client>& clnt, vector<Dog>& dg);
void saveData(ofstream& clntLst, vector<Client>& clnt);
bool testYes(string s);

// main
int main()
{
	// variables
	vector<Client> client;
	vector<Dog> dogList;
	fstream masterClientList;
	ofstream savedClientList;
	string file = "";
	int clientCount = 0, clientCount2 = 0;

	// set the precision
	cout << fixed << setprecision(0);

	// open the files
	masterClientList.open("C:/Users/Austin/Google Drive/testClient.csv");
	savedClientList.open("C:/Users/Austin/Google Drive/testClient2.csv");

	if (!masterClientList)
	{
		cout << "failure to load master client list" << endl;
		return 1;
	}
	else
	{
		// read the data
		getClientData(masterClientList, client, dogList, clientCount2);
		cout << "loading master client list..." << endl;
	}
	if (!savedClientList)
	{
		cout << "failure to load saved client list" << endl;
		return 1;
	}
	else
	{
		cout << "loading saved client list..." << endl;
	}

	// print the menu
	menu(savedClientList, client, dogList);

	// close the files
	masterClientList.close();
	savedClientList.close();

	return 0;
}

// read in data from a comma seperated value
void getClientData(fstream& clntLst, vector<Client>& clnt, vector<Dog>& dg, int& cnt)
{
	// variables 
	string discard, firstName, lastName, primaryPhoneNumber, secondaryPhoneNumber, email, email2,
		address, city, state, zip, paidApplication, applicationDate, paidProgramm, feesPaid, adminComments,
		dogName, originDog, dateOfDogPlacement, dogBirthDate, dogBreed, dogCost, trainer, trainerComments,
		tasks, idExpiration, publicAccess, certificates, classLevel, individualCost, missedClasses, retainer;
	Client c;
	Dog d;
	int zp; // zip
	float fp, dc, ic; // fees paid, dog cost, individual cost
	double ppn, spn; // primary and secondary phone numbers

	do
	{
		// read data from file into the array of clients
		getline(clntLst, firstName, ',');
		getline(clntLst, lastName, ',');
		getline(clntLst, primaryPhoneNumber, ',');
		getline(clntLst, secondaryPhoneNumber, ',');
		getline(clntLst, email, ',');
		getline(clntLst, email2, ',');
		getline(clntLst, address, ',');
		getline(clntLst, city, ',');
		getline(clntLst, state, ',');
		getline(clntLst, zip, ',');
		getline(clntLst, paidApplication, ',');
		getline(clntLst, applicationDate, ',');
		getline(clntLst, paidProgramm, ',');
		getline(clntLst, feesPaid, ',');
		getline(clntLst, adminComments, ',');
		getline(clntLst, dogName, ',');
		getline(clntLst, originDog, ',');
		getline(clntLst, dateOfDogPlacement, ',');
		getline(clntLst, dogBirthDate, ',');
		getline(clntLst, dogBreed, ',');
		getline(clntLst, dogCost, ',');
		getline(clntLst, trainer, ',');
		getline(clntLst, trainerComments, ',');
		getline(clntLst, tasks, ',');
		getline(clntLst, idExpiration, ',');
		getline(clntLst, publicAccess, ',');
		getline(clntLst, certificates, ',');
		getline(clntLst, classLevel, ',');
		getline(clntLst, individualCost, ',');
		getline(clntLst, missedClasses, ',');
		getline(clntLst, retainer);

		// convert the string phone numbers to doubles
		ppn = atof(primaryPhoneNumber.c_str());
		spn = atof(secondaryPhoneNumber.c_str());
		zp = atof(zip.c_str());
		fp = atof(feesPaid.c_str());
		dc = atof(dogCost.c_str());
		ic = atof(individualCost.c_str());

		// assign data to the client
		c.setFirstName(firstName);
		c.setLastName(lastName);
		c.setPrimaryPhoneNumber(ppn);
		c.setSecondPhoneNumber(spn);
		c.setEmail(email);
		c.setEmail2(email2);
		c.setAddress(address);
		c.setCity(city);
		c.setState(state);
		c.setZip(zp);
		if (testYes(paidApplication))
		{
			c.setPaidApplicationFee();
		}
		c.setApplicationDate(applicationDate);
		if (testYes(paidProgramm))
		{
			c.setPaidProgramFee();
		}
		c.setFeesPaid(fp);
		c.setAdminComments(adminComments);
		c.setIndividualCost(ic);
		// set the dog
		d.setName(dogName);
		d.setHandlerFirstName(firstName);
		d.setHandlerLastName(lastName);
		d.setOrigin(originDog);
		d.setPlacementDate(dateOfDogPlacement);
		d.setBreed(dogBreed);
		d.setCost(dc);
		d.setTasks(tasks);
		d.setIDExpiration(idExpiration);
		d.setPublicAccess(publicAccess);
		d.setCertificates(certificates);
		c.setTrainer(trainer);
		d.setClassLevel(classLevel);
		
		// set the dog to the person
		c.setDog(d);

		// add to the vector
		dg.push_back(d); // dog
		clnt.push_back(c); // client

		// save the count
		cnt++;

	} while (!clntLst.eof());
}

// print the menu for the program
void menu(ofstream& clntLst, vector<Client>& clnt, vector<Dog>& dg)
{
	// variable 
	char choice; // user selection
	char discard; // a discardable variable

	// selection menu
	cout << "Welcome to the Victory Service Dog Information Console" << endl << endl;
	cout << "Please make a choice from the following options" << endl << endl;
	cout << "1. Print the List" << endl;
	cout << "2. Print the Dog List" << endl;
	cout << "3. Save the List" << endl;
	cout << "e. Exit the program" << endl;
	cin >> choice;

	// selection test
	switch (choice)
	{
	case '1':
		printData(clnt);
		returnToMenu(clntLst, clnt, dg);
		break;
	case '2':
		printDogData(dg);
		returnToMenu(clntLst, clnt, dg);
		break;
	case '3':
		saveData(clntLst, clnt);
		returnToMenu(clntLst, clnt, dg);
		break;
	case 'e':
	case 'E':
		break;
	default:
		cout << "Invalid Selection" << endl;
		system("pause");
		system("CLS");
		menu(clntLst, clnt, dg);
		break;
	}
}

// print the client list
void printData(vector<Client>& client)
{
	for (int k = 1; k < client.size() - 1; k++)
	{
		client[k].print();
		cout << endl;
	}
}

// print the client list
void printDogData(vector<Dog>& dg)
{
	for (int k = 1; k < dg.size() - 1; k++)
	{
		dg[k].print();
		cout << endl;
	}
}

// clear the console and return to the menu
void returnToMenu(ofstream& clntLst, vector<Client>& clnt, vector<Dog>& dg)
{
	// variables
	char s; // selection choice

	// prompt
	cout << "Press M to return to the Main Menu." << endl
		<< "Press Q to Quit without saving: " << endl;
	cin >> s;

	while (s != 'm' && s != 'M' && s != 'q' && s != 'Q')
	{
		cout << "Invalid Selection, please enter m/M for Menu or q/Q for Quit" << endl;
		cin >> s;
	}
	if (s == 'm' || s == 'M')
	{
		system("CLS");
		menu(clntLst, clnt, dg);
	}

}

// save the data
void saveData(ofstream& clntLst, vector<Client>& clnt)
{
	for (int i = 0; i < clnt.size() - 1; i++)
	{
		clntLst << clnt[i].getFirstName() << "," << clnt[i].getLastName() << ","
			<< clnt[i].getDogName() << "," << clnt[i].getPrimaryPhoneNumber() << ","
			<< clnt[i].getSecondPhoneNumber() << "," << clnt[i].getEmail() << ","
			<< clnt[i].getAddress() << "," << clnt[i].getTrainer() << endl;
	}
	cout << "Your Data Has Been saved" << endl;
}

bool testYes(string s)
{
	if (s == "yes" || s == "Yes" || s == "YES")
	{
		return true;
	}
	return false;
}