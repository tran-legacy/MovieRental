///////////////////////////////////////////////////////////////////////////////
// Names	  : Tran Le and Nicholas Gorsline
// Date	      : 3/10/2017
// Project    : Assignment 4: Movie Rental Store
// Course     : Pisan, CSS 343
// File Desc  : Movie class that classic, comedy, and drama. 
//			    All methods will be overriden by the child class.
///////////////////////////////////////////////////////////////////////////////

#include "movie.h"

// Copy constructor
Movie::Movie(const Movie& m) {
	this->directorName = m.directorName; 
	this->movieTitle = m.movieTitle; 
	this->releaseYear = m.releaseYear; 
}

// Constructor that takes in a director name, movie and releaseyear
Movie::Movie(const string& directorName, const string& movieTitle,  
	const int releaseYear) {
	this->movieTitle = movieTitle;
	this->directorName = directorName;
	this->releaseYear = releaseYear;
}

// Returns movie title
const string Movie::getMovieTitle() const{
	return movieTitle;
}

// Returns director name
const string Movie::getDirectorName() const{
	return directorName;
}

// Returns release year
int Movie::getReleaseYear() const{
	return releaseYear;
}
