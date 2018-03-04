#ifndef MOVIEINVENTORY_H
#define MOVIEINVENTORY_H
#include "movie.h"

class MovieInventory {
public: 
	MovieInventory(Movie* m, const int quantity, char mediaType); 
	virtual ~MovieInventory();

	void increaseQuantity(const int quantity);

private:
	// Private enum, can easily add new media type
	enum Media { DVD };

	Movie* movie; 
	int quantity; 
	Media type;
};
#endif // !MOVIEINVENTORY_H
