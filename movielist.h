///////////////////////////////////////////////////////////////////////////////
// Names	  : Tran Le and Nicholas Gorsline
// Date	      : 3/10/2017
// Project    : Assignment 4: Movie Rental Store
// Course     : Pisan, CSS 343
// File Desc  : List of movies that will hold the movie inventory objects, and
//              sort the movies by specific criteria
///////////////////////////////////////////////////////////////////////////////

#ifndef MOVIELIST_H
#define MOVIELIST_H

#include <vector>
#include <list>
#include <string>
#include "movieinventory.h"
#include "moviefactory.h"
#include "movie.h"

using namespace std;

class MovieList {
public:
	// Constructor
	MovieList();
	// Destructor
	virtual ~MovieList();

	// Adding a comedy or drama: will handle duplications and sorting
	bool addMovie(const char genre, const string& directorName,
		const string& movieTitle, const int releaseYear, const int quantity); 
	// Adding a classic: will handle duplications and sorting
	bool addMovie(const char genre, const string& directorName,
		const string& movieTitle, const int releaseYear,
		const string& majorActor, int releaseMonth, int quantity); 

	// Incrementing a classic movie
	bool incrementMovie(const char mediaType, const int releaseMonth, 
		const int releaseYear, const string& majorActor);
	// Incrementing comedy movies
	bool incrementMovie(const char mediaType, const string& title,
		const int releaseYear);
	// Incrementing drama movies
	bool incrementMovie(const char mediaType, const string& director, const string& title);

	/****DECREMENTS WILL CHECK IF QUANTITY IS ABOVE 0****/
	// Decrement a classic movie
	bool decrementMovie(const char mediaType, const int releaseMonth,
		const int releaseYear, const string& majorActor);
	// Decrement comedy movies
	bool decrementMovie(const char mediaType, const string& title,
		const int releaseYear);
	// Decrement  drama movies
	bool decrementMovie(const char mediaType, const string& director, const string& title);

	// For printing movies out in a FAnCy format
	void printMovies() const;


private:
	// Index 0: Comedy (F)
	const static int F = 0;
	// Index 1: Drama (D)
	const static int D = 1;
	// Index 2: Classics (C)
	const static int C = 2; 

	const static char DVD = 'D';
	vector<list<MovieInventory*>> movieList;
	MovieFactory factory;

	// Checks if media type is a DVD
	bool isDVD(const char mediaType) const;
};
#endif // !MOVIELIST_H