#include "movieinventory.h"
#include <iostream>
MovieInventory::MovieInventory(Movie* m, const int quantity, char mediaType) {
	this->movie = m; 
	this->quantity = quantity; 
	if (mediaType == 'D')
		this->type = DVD;
	else
		cout << "Incorrect media type, you better set this later yourself" << endl; 
}

void MovieInventory::increaseQuantity(const int quantity) {
	this->quantity += quantity;
}

void MovieInventory::decreaseQuantity(const int quantity) {
	this->quantity -= quantity;
}

void MovieInventory::setMediaType(const char mediaType) {
	if (mediaType == 'D')
		this->type = DVD;
	else {
		cout << "Incorrect media type still!" << endl;
		cout << "Current possible data types: "; 
		cout << "DVD" << endl; 
	}
}
