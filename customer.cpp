#include "customer.h"

Customer::Customer(const int ID, const string firstName, const string lastName)
	: ID(ID), firstName(firstName), lastName(lastName) {}

void Customer::printHistory() const {
	history.print();
}

void Customer::addIntoHistory(const string& customerTransaction) {
	history.add(customerTransaction);
}
