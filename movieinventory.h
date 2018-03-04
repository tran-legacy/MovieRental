#ifndef MOVIEINVENTORY_H
#define MOVIEINVENTORY_H
#include "movie.h"

class MovieInventory {
public: 
	MovieInventory(Movie* m, const int quantity, char mediaType); 
	virtual ~MovieInventory() {};

	void increaseQuantity(const int quantity);
	void decreaseQuantity(const int quantity);

	void setMediaType(const char mediaType);

	int getQuantity() const;
	Movie* getMovie() const;
	char getMediaType() const;
private:
	// Private enum, can easily add new media type
	enum Media { DVD };

	Movie* movie; 
	int quantity; 
	Media type;
};
#endif // !MOVIEINVENTORY_H