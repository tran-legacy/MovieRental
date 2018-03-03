#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "history.h"
#include <string>
using namespace std;

class Customer {
public:
	Customer(const int ID, const string firstName, const string lastName); 
	virtual ~Customer() {};

	void printHistory() const;
	void addIntoHistory(const string& customerTransaction); 
	void checkOut(); // not sure about param 
	void checkIn(); // Not sure about param

private:
	int ID; 
	string firstName; 
	string lastName; 
	History history;
};
#endif // !CUSTOMER_H
