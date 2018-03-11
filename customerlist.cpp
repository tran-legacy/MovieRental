///////////////////////////////////////////////////////////////////////////////
// Names	  : Tran Le and Nicholas Gorsline
// Date	      : 3/10/2017
// Project    : Assignment 4: Movie Rental Store
// Course     : Pisan, CSS 343
// File Desc  : This file is the customer list that will take care of hashing
//              the customer ID and storing them in a 2D array. The hash
//              points to the pointer for the customer.
///////////////////////////////////////////////////////////////////////////////

#include "customerlist.h"
#include <iostream>

using namespace std;

// Default constructor
CustomerList::CustomerList() {}

// Destructor that will delete all customers. Loop through each bucket
// and delete each customer object there
CustomerList::~CustomerList() {
	// Delete each Customer
	// for each bucket in the array
	for (size_t arrayIndex = 0; arrayIndex < SIZE; ++arrayIndex) {
		for (size_t vectorIndex = 0; vectorIndex < custList[arrayIndex].size();
			++vectorIndex) {
			// Delete the *newed* customer
			delete custList[arrayIndex].at(vectorIndex);
			// Don't have to set nullptr since we passed it in directly
		}
	}
}

bool CustomerList::addCustomer(const int ID, const string& customerName) {
	// Make sure ID is 4 digits
	if (ID > 999 && ID < 10000) {
		int index = hash(ID);
		// Find if customer exists first
		for (size_t i = 0; i < custList[index].size(); ++i) {
			// if the ID exists, return false
			if (custList[index].at(i)->getID() == ID)  
				cout << "ERROR: Customer " << ID << " already exists." << endl;
			return false;
		}
		// Push the new customer into the correct bucket
		custList[index].push_back(new Customer(ID, customerName));
		return true;
	}
	cout << "ERROR: " << ID << " is invalid. Needs to be 4 digits." << endl;
	return false;
}

// Hashing the customer based off of the hash value
int CustomerList::hash(const int ID) const {
	return ID % HASH_MOD;
}

Customer* CustomerList::getCustomer(const int ID) {
	int index = hash(ID);
	// Find if customer exists first
	for (size_t i = 0; i < custList[index].size(); ++i) {
		if (custList[index].at(i)->getID() == ID)  // If the bucket has ID
			return custList[index].at(i);  // Return Customer*
	}
	return nullptr;
}
