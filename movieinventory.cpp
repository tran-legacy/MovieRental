#include "movieinventory.h"

MovieInventory::MovieInventory(Movie* m, const int quantity, char mediaType) {
	this->movie = m; 
	this->quantity = quantity; 
	if (mediaType == 'D') this->type = DVD; 

}
