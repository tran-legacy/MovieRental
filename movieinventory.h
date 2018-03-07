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
	// We're assuming right now there'll only be DVDs 
	// If we have other media types, these will need another parameter
	void increaseQuantity(const int quantity);
	void decreaseQuantity(const int quantity);

	// Not sure if we'll need this, keeping it commented it out for now
	//void setMediaType(const char mediaType);

	// Getters for stuff
	// ASSUMPTION: only DVDs right now
	// If we have other media types, get quantity will need a parameter that specifies 
	// which media type quantity they're looking for
	int getQuantity() const;
	Movie* getMovie() const;

private:
	// This is the index of DVD
	// Can easily add new media types in the future
	const static int DVD = 0; 

	Movie* movie;
	// Size of 1 currently because we only have 1 media type
	int mediaQuantity[1];

};
#endif // !MOVIEINVENTORY_H