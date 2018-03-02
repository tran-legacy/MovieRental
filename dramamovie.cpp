#include "dramamovie.h"
#include <iostream>

DramaMovie::DramaMovie(const string& directorName, const string& movieTitle,
       const int releaseYear) : Movie(directorName, movieTitle, releaseYear) {}

DramaMovie::~DramaMovie(){}

void DramaMovie::print() const {
	cout << DRAMA << ", " << this->directorName << ", " << this->movieTitle
		<< ", " << this->releaseYear << endl;
}

bool DramaMovie::operator==(const Movie* movieObj) const {
	if (this->directorName == movieObj->getDirectorName() &&
		this->movieTitle == movieObj->getMovieTitle() &&
		this->releaseYear == movieObj->getReleaseYear()) {
		return true;
	}
	else {
		return false;
	}
}

bool DramaMovie::operator<(const Movie * movieObj) const{
	return false;
}

bool DramaMovie::operator>(const Movie * movieObj) const{
	return false;
}
