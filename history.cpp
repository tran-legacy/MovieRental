#include "history.h"
#include <iostream>

void History::print() const {
	for (int i = history.size(); i >= 0; --i) {
		cout << history[i] << endl;
	}
}

void History::add(const string& customerTransaction) {
	history.push_back(customerTransaction); 
}