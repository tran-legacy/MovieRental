#ifndef CUSTOMERLIST_H
#define CUSTOMERLIST_H

#include "customer.h"
#include <vector>
class CustomerList {
public:
	// Empty default constructor 
	CustomerList();
	// Destructor, deletes the Customers in the list
	~CustomerList();

	// Adding a new customer into the list
	// Handles duplications
	bool addCustomer(const int ID, const string& customerName);
	// Our stupid hash function
	int hash(const int ID) const;
	// Get a customer by ID
	Customer* getCustomer(const int ID); 
private: 
	// Const variable that is use for the modular hashing
	const static int HASH_MOD = 289;
	const static int SIZE = 238; 
	// Array of customer vectors
	vector<Customer*> custList[SIZE];


};

#endif // !CUSTOMERLIST_H