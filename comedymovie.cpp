#include "comedymovie.h"
#include <iostream>

ComedyMovie::ComedyMovie(const string & directorName, const string & movieTitle,
	const int releaseYear) : Movie(directorName, movieTitle, releaseYear) {}

ComedyMovie::~ComedyMovie(){}

void ComedyMovie::print() const{
	cout << COMEDY << ", " << this->directorName << ", " << this->movieTitle
		<< ", " << this->releaseYear << endl;
}

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

bool ComedyMovie::operator>(const Movie& movieObj) const{
	return !(*this < movieObj);
}

//Movie& ComedyMovie::operator=(const Movie& movieObj) {
//	if (this == &movieObj) return *this;
//
//	this->directorName = movieObj.getDirectorName();
//	this->movieTitle = movieObj.getMovieTitle();
//	this->releaseYear = movieObj.getReleaseYear();
//
//	return *this;
//}