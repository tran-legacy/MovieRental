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
