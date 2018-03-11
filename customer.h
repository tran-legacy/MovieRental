#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "history.h"
#include <string>
using namespace std;

class Customer {
public:
	// Constructor
	Customer(const int ID, const string customerName); 
	// Empty destructor (nothing was *newed*
	virtual ~Customer() {};

	// Print this customer's history
	void printHistory() const;
	// Add a new transaction into this customer history
	void addIntoHistory(const string& customerTransaction); 

	// Get customerID
	int getID() const;

private:
	int ID; 
	// Composite string of customer's firstname and last name
	string customerName; 
	History history;
};
#endif // !CUSTOMER_H
