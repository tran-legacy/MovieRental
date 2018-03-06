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

MovieInventory::~MovieInventory() {
	delete movie; 
	movie = nullptr;
}

void MovieInventory::increaseQuantity(const int quantity) {
	this->quantity += quantity;
}

void MovieInventory::decreaseQuantity(const int quantity) {
	this->quantity -= quantity;
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
	return this->quantity;
}

Movie * MovieInventory::getMovie() const {
	return this->movie;
}

char MovieInventory::getMediaType() const {
	// In the future, when there are more media types
	// there'll be more if blocks
	if (this->type == DVD) {
		return 'D'; 
	}
	// But for now, all movies are DVDs
	return 'D'; 
}
