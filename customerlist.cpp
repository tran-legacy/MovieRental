#include "customerlist.h"
#include <iostream>

using namespace std;

// Empty
CustomerList::CustomerList() {}


CustomerList::~CustomerList() {
	// Delete each Customer
	// for each bucket in the array
	for (int arrayIndex = 0; arrayIndex < SIZE; ++arrayIndex) {
		for (int vectorIndex = 0; vectorIndex < custList[arrayIndex].size(); ++vectorIndex) {
			// Delete the *newed* customer
			delete custList[arrayIndex].at(vectorIndex);
			// Don't have to set nullptr since we passed it in directly
		}
	}
}

bool CustomerList::addCustomer(const int ID, const string& customerName) {
	int index = hash(ID); 
	// Find if customer exists first
	for (int i = 0; i < custList[index].size(); ++i) {
		if (custList[index].at(i)->getID() == ID)  // if the ID exists, return false
			cout << "ERROR: Customer " << ID << " already exists." << endl;
			return false;
	}
	// Push the new customer into the correct bucket
	custList[index].push_back(new Customer(ID, customerName));
	return true;
}

int CustomerList::hash(const int ID) const {
	return ID % HASH_MOD;
}

Customer* CustomerList::getCustomer(const int ID) {
	int index = hash(ID);
	// Find if customer exists first
	for (int i = 0; i < custList[index].size(); ++i) {
		if (custList[index].at(i)->getID() == ID)  // If the bucket has ID
			return custList[index].at(i);  // Return Customer*
	}
	return nullptr;
}
