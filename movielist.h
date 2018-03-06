#ifndef MOVIELIST_H
#define MOVIELIST_H

#include <vector>
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

	// Adding a comedy or drama: will handle duplications 
	bool addMovie(const char genre, const string& directorName,
		const string& movieTitle, const int releaseYear); 
	// Adding a classic: will handle duplications 
	bool addMovie(const char genre, const string& directorName,
		const string& movieTitle, const int releaseYear,
		const string& majorActor, int releaseMonth); 

	// Incrementing a classic movie
	bool incrementMovie(const char mediaType, const int releaseMonth, 
		const int releaseYear);
	// Incrementing any other movies
	bool incrementMovie(const char mediaType, const int releaseMonth,
		const int releaseYear);
private:
	// Index 0: Comedy (F)
	const static int F = 0;
	// Index 1: Drama (D)
	const static int D = 1;
	// Index 2: Classics (C)
	const static int C = 2; 
	vector<vector<MovieInventory>> movieList;
};
#endif // !MOVIELIST_H