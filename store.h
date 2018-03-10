#ifndef STORE_H
#define STORE_H

#include "movielist.h"
#include "customerlist.h"
#include<iostream>
#include <fstream>
using namespace std;

class Store {
public:
	Store();
	virtual ~Store();

	void populateMovie(string& infile);
	void populateCustomer(ifstream infile);
	void commandHandler(ifstream infile);
	void printCustomerHistory(const string& customer);
	void printInventory();
	bool borrowMovie(const string& command);
	bool returnMovie(const string& command);

private:
	CustomerList customerList; 
	MovieList movieList;
};
#endif // !STORE_H


