#ifndef CUSTOMERLIST_H
#define CUSTOMERLIST_H

#include "customer.h"
#include <vector>
class CustomerList {
public:
	CustomerList();
	~CustomerList();
	bool addCustomer(const int ID, const string firstName, 
		const string lastName); 
private: 
	vector<Customer*> custList[30];
};
#endif // !CUSTOMERLIST_H



