///////////////////////////////////////////////////////////////////////////////
// Names	  : Tran Le and Nicholas Gorsline
// Date	      : 3/10/2017
// Project    : Assignment 4: Movie Rental Store
// Course     : Pisan, CSS 343
// File Desc  : Movie factory that will genereate a new movie based of the
//              given parameters and return a pointer to that object
///////////////////////////////////////////////////////////////////////////////

#ifndef MOVIEFACTORY_H
#define MOVIEFACTORY_H

#include "movie.h"
#include "classicmovie.h"
#include "comedymovie.h"
#include "dramamovie.h"

using namespace std;

class MovieFactory {
public:
	// Constructor
	MovieFactory() {}
	// Destructor
	~MovieFactory() {}

	// For making comedy and drama movies
	Movie* makeMovie(const char genre, const string& directorName, 
		const string& movieTitle, const int releaseYear);
	// For making classic movies 
	Movie* makeMovie(const char genre, const string& directorName, 
		const string& movieTitle, const int releaseYear, 
		const string& majorActor, int releaseMonth);
};
#endif // !MOVIEFACTORY_H
