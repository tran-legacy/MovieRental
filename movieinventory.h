#ifndef MOVIEINVENTORY_H
#define MOVIEINVENTORY_H
#include "movie.h"

class MovieInventory {
public: 
	MovieInventory(const Movie* m, const int quantity, char mediaType); 
	virtual ~MovieInventory();

	void increaseQuantity(const int quantity);

private:
	Movie* movie; 
	int quantity; 
	Media type;

	// Private enum, can easily add new media type
	enum Media {DVD};
};
#endif // !MOVIEINVENTORY_H
