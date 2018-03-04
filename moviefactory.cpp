#include "moviefactory.h"
#include <iostream>

Movie* MovieFactory::makeMovie(const char genre, const string& directorName,
	const string& movieTitle, const int releaseYear) {
	// If it's a commedy 
	if (genre == 'F') {
		return new ComedyMovie(directorName, movieTitle, releaseYear);
	} else if (genre == 'D') {  // If it's a drama
		return new DramaMovie(directorName, movieTitle, releaseYear);
	} else {  // Else print an error
		cout << "ERROR: " << genre << " is not a movie genre!" << endl;
		return nullptr;
	}
}

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
