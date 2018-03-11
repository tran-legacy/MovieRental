#include "customer.h"
#include <iostream>
Customer::Customer(const int ID, const string customerName)
	: ID(ID), customerName(customerName) {}

void Customer::printHistory() const {
	cout << "***History of " << this->ID << " (" << this->customerName  << ")***" << endl;
	history.print();
	cout << "***End history of " << this->ID << " (" << this->customerName
		<< ")***" << endl << endl;
}

void Customer::addIntoHistory(const string& customerTransaction) {
	// Call the History class add() function to add a new customer transaction
	history.add(customerTransaction);
}

int Customer::getID() const {
	return this->ID;
}
