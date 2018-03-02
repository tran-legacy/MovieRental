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
	cout << "CALLED?????" << endl;

	if (this == movieObj) return true;

	else if (this->directorName == movieObj->getDirectorName() &&
		this->movieTitle == movieObj->getMovieTitle() &&
		this->releaseYear == movieObj->getReleaseYear()) {
		return true;
	}
	else {
		return false;
	}
}

// Operator <
// Sorted by Title, then Release Year
bool ComedyMovie::operator<(const Movie * movieObj) const{
	cout << "TEST this method to make sure its correct" << endl;
	if (this->movieTitle < movieObj->getMovieTitle()) {
		return true;
	}
	else if (this->movieTitle > movieObj->getMovieTitle()) {
		return false;
	}
	// Movie Titles are equal, check Release Year
	else {
		if (this->releaseYear < movieObj->getReleaseYear()) {
			return true;
		}
		else if (this->releaseYear > movieObj->getReleaseYear()) {
			return false;
		}
	}
	return false;
}

bool ComedyMovie::operator>(const Movie * movieObj) const{
	return !(this < movieObj);
}
