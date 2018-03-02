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

// Not being called for some reason
bool ClassicMovie::operator==(const Movie* movieObjOrig) const {
	cout << "Entered ==" << endl;
	const ClassicMovie* movieObj = dynamic_cast<const ClassicMovie*>(movieObjOrig);
	if (this == movieObj) return true;

	else if (this->directorName == movieObj->getDirectorName() &&
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

bool ClassicMovie::operator<(const Movie * movieObjOrig) const{
	const ClassicMovie* movieObj = dynamic_cast<const ClassicMovie*>(movieObjOrig);
	if (this->releaseMonth < movieObj->getReleaseMonth()) {
		return true;
	}
	else if (this->releaseMonth > movieObj->getReleaseMonth()) {
		return false;
	}
	// Months are equal, move to year
	else {
		if (this->releaseYear < movieObj->getReleaseYear()) {
			return true;
		}
		else if (this->releaseYear > movieObj->getReleaseYear()) {
			return false;
		}
		// Years are equal, move to major actor
		else {
			if (this->majorActor < movieObj->getMajorActor()) {
				return true;
			}
			else if (this->majorActor > movieObj->getMajorActor()) {
				return false;
			}
		}
	}
	return false;
}

bool ClassicMovie::operator>(const Movie * movieObj) const{
	return false;
}
