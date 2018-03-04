#include "dramamovie.h"
#include <iostream>

DramaMovie::DramaMovie(const string& directorName, const string& movieTitle,
       const int releaseYear) : Movie(directorName, movieTitle, releaseYear) {}

DramaMovie::~DramaMovie(){}

void DramaMovie::print() const {
	cout << DRAMA << ", " << this->directorName << ", " << this->movieTitle
		<< ", " << this->releaseYear << endl;
}

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

bool DramaMovie::operator>(const Movie& movieObj) const{
	return !(*this < movieObj);
}

Movie& DramaMovie::operator=(const Movie& movieObj) {
	if (this == &movieObj) return *this;

	this->directorName = movieObj.getDirectorName();
	this->movieTitle = movieObj.getMovieTitle();
	this->releaseYear = movieObj.getReleaseYear();

	return *this;
}