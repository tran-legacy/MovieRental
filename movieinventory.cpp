///////////////////////////////////////////////////////////////////////////////
// Names	  : Tran Le and Nicholas Gorsline
// Date	      : 3/10/2017
// Project    : Assignment 4: Movie Rental Store
// Course     : Pisan, CSS 343
// File Desc  : Movie inventory that will handle all of the management of
//              the movies stock. It will handle increasing and decreasing
//              quantity
///////////////////////////////////////////////////////////////////////////////

#include "movieinventory.h"
#include <iostream>

// Constructor for movieInventory
MovieInventory::MovieInventory(Movie* m, const int quantity, char mediaType) {
	this->movie = m; 
	if (mediaType == 'D') 
		mediaQuantity[DVD] = quantity;
	else
		cout << "ERROR: " << mediaType << " is an incorrect media type." << endl; 
}

// Destructor
MovieInventory::~MovieInventory() {
	delete movie;
	movie = nullptr;
}

// Increase quantity for the movie based on the given quantity
void MovieInventory::increaseQuantity(const int quantity) {
	mediaQuantity[DVD] += quantity;
}

// Decrease quantity for the movie based on the given quantity
void MovieInventory::decreaseQuantity(const int quantity) {
	mediaQuantity[DVD] -= quantity;
}

int MovieInventory::getQuantity() const {
	return mediaQuantity[DVD];
}

Movie * MovieInventory::getMovie() const {
	return this->movie;
}
