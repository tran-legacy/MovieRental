///////////////////////////////////////////////////////////////////////////////
// Names	  : Tran Le and Nicholas Gorsline
// Date	      : 3/10/2017
// Project    : Assignment 4: Movie Rental Store
// Course     : Pisan, CSS 343
// File Desc  : Comedy movie, inherits from movie
///////////////////////////////////////////////////////////////////////////////

#include "comedymovie.h"
#include <iostream>

// Constructor
ComedyMovie::ComedyMovie(const string & directorName, const string & movieTitle,
	const int releaseYear) : Movie(directorName, movieTitle, releaseYear) {}

// Destructor
ComedyMovie::~ComedyMovie(){}

// Prints the movie information
void ComedyMovie::print() const{
	cout << COMEDY << ", " << this->directorName << ", " << this->movieTitle
		<< ", " << this->releaseYear << endl;
}

// Operator == overload
bool ComedyMovie::operator==(const Movie& movieObj) const {
	if (this == &movieObj) return true;

	return (this->directorName == movieObj.getDirectorName() &&
		this->movieTitle == movieObj.getMovieTitle() &&
		this->releaseYear == movieObj.getReleaseYear());
}

// Operator <
// Sorted by Title, then Release Year
bool ComedyMovie::operator<(const Movie& movieObj) const{
	if (this->movieTitle < movieObj.getMovieTitle()) {
		return true;
	}
	else if (this->movieTitle > movieObj.getMovieTitle()) {
		return false;
	}
	// Movie Titles are equal, check Release Year
	else {
		if (this->releaseYear < movieObj.getReleaseYear()) {
			return true;
		}
		else if (this->releaseYear > movieObj.getReleaseYear()) {
			return false;
		}
	}
	return false;
}

// Operator >, uses <
bool ComedyMovie::operator>(const Movie& movieObj) const{
	return !(*this < movieObj);
}
