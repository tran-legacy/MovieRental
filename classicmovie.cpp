#include "classicmovie.h"
#include <iostream>

ClassicMovie::ClassicMovie(const string& directorName, const string& movieTitle,
						   const int releaseYear, const string & majorActor, 
						   int releaseMonth)
						   : Movie(directorName, movieTitle, releaseYear) {
	this->majorActor = majorActor;
	this->releaseMonth = releaseMonth;
}

ClassicMovie::~ClassicMovie() {}

void ClassicMovie::print() const {
	cout << CLASSIC << ", " << this->directorName << ", " << this->movieTitle
		<< ", " << this->majorActor << ", " << this->releaseMonth << " " 
		<< this->releaseYear << endl;
}

const string ClassicMovie::getMajorActor() const {
	return majorActor;
}

const int ClassicMovie::getReleaseMonth() const {
	return releaseMonth;
}

bool ClassicMovie::operator==(const ClassicMovie* movieObj) const {
	if (this->directorName == movieObj->getDirectorName() &&
		this->movieTitle == movieObj->getMovieTitle() &&
		this->releaseYear == movieObj->getReleaseYear() &&
		this->majorActor == movieObj->getMajorActor() &&
		this->releaseMonth == movieObj->getReleaseMonth()) {
		return true;
	}
	else {
		return false;
	}
}

bool ClassicMovie::operator<(const Movie * movieObj) const{
	return false;
}

bool ClassicMovie::operator>(const Movie * movieObj) const{
	return false;
}
