///////////////////////////////////////////////////////////////////////////////
// Names	  : Tran Le and Nicholas Gorsline
// Date	      : 3/10/2017
// Project    : Assignment 4: Movie Rental Store
// Course     : Pisan, CSS 343
// File Desc  : History for a customer
///////////////////////////////////////////////////////////////////////////////

#include "history.h"
#include <iostream>

// Prints out the whole transaction history for a customer
void History::print() const {
	// For each transaction in history, cout it
	for (int i = history.size() - 1; i >= 0; --i) 
		cout << history[i] << endl;
}

// Adds an additional history entry for the customer
void History::add(const string& customerTransaction) {
	history.push_back(customerTransaction); 
}