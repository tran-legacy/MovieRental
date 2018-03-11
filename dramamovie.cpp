///////////////////////////////////////////////////////////////////////////////
// Names	  : Tran Le and Nicholas Gorsline
// Date	      : 3/10/2017
// Project    : Assignment 4: Movie Rental Store
// Course     : Pisan, CSS 343
// File Desc  : Drama movie, inherits from movie
///////////////////////////////////////////////////////////////////////////////

#include "dramamovie.h"
#include <iostream>

// Constructor
DramaMovie::DramaMovie(const string& directorName, const string& movieTitle,
       const int releaseYear) : Movie(directorName, movieTitle, releaseYear) {}

// Destructor
DramaMovie::~DramaMovie(){}

// Prints out the information about the movie
void DramaMovie::print() const {
	cout << DRAMA << ", " << this->directorName << ", " << this->movieTitle
		<< ", " << this->releaseYear << endl;
}

// Operator ==: returns if the movie is equal to another
bool DramaMovie::operator==(const Movie& movieObj) const {
	if (this == &movieObj) return true;

	return this->directorName == movieObj.getDirectorName() &&
		this->movieTitle == movieObj.getMovieTitle() &&
		this->releaseYear == movieObj.getReleaseYear();
}

// Operator <
// Sort by director then title
bool DramaMovie::operator<(const Movie& movieObj) const {
	if (this->directorName < movieObj.getDirectorName()) {
		return true;
	}
	else if (this->directorName > movieObj.getDirectorName()) {
		return false;
	}
	// Director names equal, move to title
	else {
		if (this->movieTitle < movieObj.getMovieTitle()) {
			return true;
		}
		else if (this->movieTitle > movieObj.getMovieTitle()) {
		}
		return false;
	}
}

// Operator >, uses operator <
bool DramaMovie::operator>(const Movie& movieObj) const{
	return !(*this < movieObj);
}