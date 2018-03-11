///////////////////////////////////////////////////////////////////////////////
// Names	  : Tran Le and Nicholas Gorsline
// Date	      : 3/10/2017
// Project    : Assignment 4: Movie Rental Store
// Course     : Pisan, CSS 343
// File Desc  : Drama movie, inherits from movie
///////////////////////////////////////////////////////////////////////////////
#ifndef DRAMAMOVIE_H
#define DRAMAMOVIE_H

#include "movie.h"
#include <string>
using namespace std; 

class DramaMovie : public Movie {

public:
	// Constructor
	DramaMovie(const string& directorName, const string& movieTitle,
		       const int releaseYear);
	// Destructor
	virtual ~DramaMovie();

	// Operator overloads
	bool operator==(const Movie& obj) const override;
	bool operator<(const Movie& movieObj) const override;
	bool operator>(const Movie& movieObj) const override;

	void print() const override;

private:
	// Setting the genre for customer for easy access
	const char DRAMA = 'D'; 
};

#endif 
