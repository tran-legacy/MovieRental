#include "moviefactory.h"
#include <iostream>

Movie* MovieFactory::makeMovie(const char genre, const string& directorName,
	const string& movieTitle, const int releaseYear) {
	// If it's a commedy 
	if (genre == 'F') {
		return new ComedyMovie(directorName, movieTitle, releaseYear);
	} else if (genre == 'D') {
		return new DramaMovie(directorName, movieTitle, releaseYear);
	} else {
		cout << "ERROR: " << genre << " is not a movie genre!" << endl;
		return nullptr;
	}
}

Movie * MovieFactory::makeMovie(const char genre, const string & directorName, 
	const string & movieTitle, const int releaseYear, 
	const string & majorActor, int releaseMonth) {
	if (genre == 'C') {
		return new ClassicMovie(directorName, movieTitle, releaseYear,
			majorActor, releaseMonth);
	} else {
		cout << "ERROR: " << genre << " is not a movie genre!" << endl;
		return nullptr;
	}
}
