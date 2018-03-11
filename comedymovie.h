///////////////////////////////////////////////////////////////////////////////
// Names	  : Tran Le and Nicholas Gorsline
// Date	      : 3/10/2017
// Project    : Assignment 4: Movie Rental Store
// Course     : Pisan, CSS 343
// File Desc  : Comedy movie, inherits from movie
///////////////////////////////////////////////////////////////////////////////

#ifndef COMEDYMOVIE_H
#define COMEDYMOVIE_H

#include "movie.h"
#include <string>
using namespace std;

class ComedyMovie : public Movie {

public:
	// Comedy movie constructor
	ComedyMovie(const string& directorName, const string& movieTitle,
		        const int releaseYear);
	virtual ~ComedyMovie();

	void print() const override;

	// Operator overloads
	bool operator==(const Movie& movieObj) const override;
	bool operator<(const Movie& movieObj) const override;
	bool operator>(const Movie& movieObj) const override;
	//Movie& operator=(const Movie& movieObj) override; 

private:
	const char COMEDY = 'F';
};

#endif 
