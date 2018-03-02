#include "comedymovie.h"
#include <iostream>

ComedyMovie::ComedyMovie(const string & directorName, const string & movieTitle,
	const int releaseYear) : Movie(directorName, movieTitle, releaseYear) {}

ComedyMovie::~ComedyMovie(){}

void ComedyMovie::print() const{
	cout << COMEDY << ", " << this->directorName << ", " << this->movieTitle
		<< ", " << this->releaseYear << endl;
}

bool ComedyMovie::operator==(const Movie* movieObj) const {
	if (this->directorName == movieObj->getDirectorName() &&
		this->movieTitle == movieObj->getMovieTitle() &&
		this->releaseYear == movieObj->getReleaseYear()) {
		return true;
	}
	else {
		return false;
	}
}

bool ComedyMovie::operator<(const Movie * movieObj) const{
	return false;
}

bool ComedyMovie::operator>(const Movie * movieObj) const{
	return false;
}
