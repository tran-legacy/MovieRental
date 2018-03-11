///////////////////////////////////////////////////////////////////////////////
// Names	  : Tran Le and Nicholas Gorsline
// Date	      : 3/10/2017
// Project    : Assignment 4: Movie Rental Store
// Course     : Pisan, CSS 343
// File Desc  : Movie factory that will genereate a new movie based of the
//              given parameters and return a pointer to that object
///////////////////////////////////////////////////////////////////////////////
#include "moviefactory.h"
#include <iostream>

// Will return either a comedy or drama based on thee parameters
Movie* MovieFactory::makeMovie(const char genre, const string& directorName,
	const string& movieTitle, const int releaseYear) {
	// If it's a comedy 
	if (genre == 'F') {
		return new ComedyMovie(directorName, movieTitle, releaseYear);
	} else if (genre == 'D') {  // If it's a drama
		return new DramaMovie(directorName, movieTitle, releaseYear);
	} else {  // Else print an error
		cout << "ERROR: " << genre << " is not a movie genre!" << endl;
		return nullptr;
	}
}
// Will return either a classic movie
Movie * MovieFactory::makeMovie(const char genre, const string & directorName, 
	const string & movieTitle, const int releaseYear, 
	const string & majorActor, int releaseMonth) {
	if (genre == 'C') {  // If it's a classic 
		return new ClassicMovie(directorName, movieTitle, releaseYear,
			majorActor, releaseMonth);
	} else {  // else print an error
		cout << "ERROR: " << genre << " is not a movie genre!" << endl;
		return nullptr;
	}
}
