#ifndef MOVIEINVENTORY_H
#define MOVIEINVENTORY_H
#include "movie.h"

class MovieInventory {
public:
	// Constructor
	MovieInventory(Movie* m, const int quantity, char mediaType); 
	// Destructor
	virtual ~MovieInventory();

	// For managing quantity of this Movie
	void increaseQuantity(const int quantity);
	void decreaseQuantity(const int quantity);

	// Not sure if we'll need this, keeping it commented it out for now
	//void setMediaType(const char mediaType);

	// Getters for stuff
	int getQuantity() const;
	Movie* getMovie() const;
	char getMediaType() const;

private:
	// Private enum, can easily add new media type when the store expands 
	// i.e. Bluray, 4K Bluray, VCR, digital, etc...
	enum Media { DVD };

	Movie* movie; 
	int quantity; 
	Media type;
};
#endif // !MOVIEINVENTORY_H