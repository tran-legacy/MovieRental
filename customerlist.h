///////////////////////////////////////////////////////////////////////////////
// Names	  : Tran Le and Nicholas Gorsline
// Date	      : 3/10/2017
// Project    : Assignment 4: Movie Rental Store
// Course     : Pisan, CSS 343
// File Desc  : Header file for customerList, inherits from movie
///////////////////////////////////////////////////////////////////////////////

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
	// Handles duplications and ID validation
	bool addCustomer(const int ID, const string& customerName);
	// Get a customer by ID, will return nullptr if ID does not exist
	Customer* getCustomer(const int ID); 
private: 
	// Const variable that is use for the modular hashing
	const static int HASH_MOD = 289;
	const static int SIZE = 291; 
	// Array of customer vectors
	vector<Customer*> custList[SIZE];
	// Our stupid hash function
	int hash(const int ID) const;


};

#endif // !CUSTOMERLIST_H