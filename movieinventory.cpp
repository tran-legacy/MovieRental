#include "movieinventory.h"
#include <iostream>
MovieInventory::MovieInventory(Movie* m, const int quantity, char mediaType) {
	this->movie = m; 
	
	if (mediaType == 'D') 
		mediaQuantity[DVD] = quantity;
	else
		cout << "ERROR: " << mediaType << " is an incorrect media type." << endl; 
}

MovieInventory::~MovieInventory() {
	delete movie;
	movie = nullptr;
}


void MovieInventory::increaseQuantity(const int quantity) {
	mediaQuantity[DVD] += quantity;
}

void MovieInventory::decreaseQuantity(const int quantity) {
	mediaQuantity[DVD] -= quantity;
}

//void MovieInventory::setMediaType(const char mediaType) {
//	if (mediaType == 'D')
//		this->type = DVD;
//	else {
//		cout << "Incorrect media type still!" << endl;
//		cout << "Current possible data types: "; 
//		cout << "DVD" << endl; 
//	}
//}

int MovieInventory::getQuantity() const {
	return mediaQuantity[DVD];
}

Movie * MovieInventory::getMovie() const {
	return this->movie;
}
