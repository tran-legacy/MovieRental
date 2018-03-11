///////////////////////////////////////////////////////////////////////////////
// Names	  : Tran Le and Nicholas Gorsline
// Date	      : 3/10/2017
// Project    : Assignment 4: Movie Rental Store
// Course     : Pisan, CSS 343
// File Desc  : Holds the customer information and history
///////////////////////////////////////////////////////////////////////////////
#include "customer.h"
#include <iostream>

// Constructor for a customer
Customer::Customer(const int ID, const string customerName)
	: ID(ID), customerName(customerName) {}

// Print the customer history
void Customer::printHistory() const {
	cout << "***History of " << this->ID << " (" << this->customerName  
		<< ")***" << endl;
	history.print();
	cout << "***End history of " << this->ID << " (" << this->customerName
		<< ")***" << endl << endl;
}

// Add history for the customer
void Customer::addIntoHistory(const string& customerTransaction) {
	// Call the History class add() function to add a new customer transaction
	history.add(customerTransaction);
}

int Customer::getID() const {
	return this->ID;
}
