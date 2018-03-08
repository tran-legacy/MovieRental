#include "movielist.h"
#include <iostream>

// Empty movieList
MovieList::MovieList() {}

// Empty destructor
MovieList::~MovieList() {}

// Add movie for comedy and drama
bool MovieList::addMovie(const char genre, const string& directorName, 
	const string& movieTitle, const int releaseYear) {
	// Check if genre is valid
	if (genre != 'F' || genre != 'D') {
		cout << "ERROR: " << genre << " is not a valid genre." << endl;
		return false;
	}
	// Check if movie is in the movieList
	for (size_t i = 0; i < movieList[genre].size(); ++i) {
		Movie* moviePtr = movieList[genre][i].getMovie(); 
		if (moviePtr->getDirectorName() == directorName)
	}

	// 
	return false;
}

// Incrementing classic movie
bool MovieList::incrementMovie(const char mediaType, const int releaseMonth, 
	const int releaseYear, const string& majorActor) {
	// Loop through the classic movie bucket
	for (size_t i = 0; i < movieList[C].size(); ++i) {
		Movie* classicM = movieList[C][i].getMovie();
		// Dynamic cast so it knows what to call 
		const ClassicMovie* classicMovie = dynamic_cast<const ClassicMovie*>(classicM);
		// If the values match, increase quantity by 1
		if (classicM->getReleaseYear() == releaseYear &&
			classicMovie->getReleaseMonth() == releaseMonth &&
			classicMovie->getMajorActor() == majorActor) {
			movieList[C][i].increaseQuantity(1);
			return true;
		}
	}
	cout << "ERROR:" << releaseMonth << " " << releaseYear << " "
		<< majorActor << " movie does not exist in the store." << endl;
	return false;
}
// Decrement for classic movie
bool MovieList::decrementMovie(const char mediaType, const int releaseMonth, const int releaseYear, const string & majorActor) {
	// Loop through the classic movie bucket
	for (size_t i = 0; i < movieList[C].size(); ++i) {
		Movie* classicM = movieList[C][i].getMovie();
		// Dynamic cast so it knows what to call 
		const ClassicMovie* classicMovie = dynamic_cast<const ClassicMovie*>(classicM);
		// If the values match
		if (classicM->getReleaseYear() == releaseYear &&
			classicMovie->getReleaseMonth() == releaseMonth &&
			classicMovie->getMajorActor() == majorActor) {
			if (movieList[C][i].getQuantity() > 0) {  // if quantity is bigger than 0
				movieList[C][i].decreaseQuantity(1);
				return true;
			} else {  // quantity is 0
				cout << "ERROR:" << releaseMonth << " " << releaseYear << " "
					<< majorActor << " movie is out of stock." << endl;
				return false;
			}
		} 
	}
	cout << "ERROR:" << releaseMonth << " " << releaseYear << " "
		<< majorActor << " movie does not exist in the store." << endl;
	return false;
}


// Increment for comedymovies
bool MovieList::incrementMovie(const char mediaType, const string& title, 
	const int releaseYear) {
	// For each movie in the comedy movie bucket
	for (size_t i = 0; i < movieList[F].size(); ++i) {
		Movie* comedyM = movieList[F][i].getMovie();
		// if the values match, we found the movie in the bucket
		if (comedyM->getMovieTitle() == title &&
			comedyM->getReleaseYear() == releaseYear) {
			movieList[F][i].increaseQuantity(1);
			return true;
		}
	}
	cout << "ERROR: " << title << ", " << releaseYear <<
		" movie does not exist in the store." << endl;
	return false;
}
//Decrement for comedy movies
bool MovieList::decrementMovie(const char mediaType, const string & title, 
	const int releaseYear) {
	// For each movie in the comedy movie bucket
	for (size_t i = 0; i < movieList[F].size(); ++i) {
		Movie* comedyM = movieList[F][i].getMovie();
		// if the values match
		if (comedyM->getMovieTitle() == title &&
			comedyM->getReleaseYear() == releaseYear) {
			// Values match and it's in stock
			if (movieList[F][i].getQuantity() > 0) { 
				movieList[F][i].increaseQuantity(1);
				return true;
			} else { // else quantity is 0
				cout << "ERROR: " << title << ", " << releaseYear <<
					" movie is out of stock." << endl;
				return false;
			}
		}
	}
	cout << "ERROR: " << title << ", " << releaseYear <<
		" movie does not exist in the store." << endl;
	return false;
}

// Increment for drama movies
bool MovieList::incrementMovie(const char mediaType, const string& director, 
	const string& title) {
	// Check if media type is valid, which is just DVD right now
	if (mediaType != DVD) {
		cout << "ERROR: " << mediaType << " is an invalid media type." << endl;
		return false;
	}

	// For each movie in the comedy movie bucket
	for (size_t i = 0; i < movieList[D].size(); ++i) {
		Movie* dramaM = movieList[D][i].getMovie();
		// if the values match, we found the movie in the bucket
		if (dramaM->getDirectorName() == director &&
			dramaM->getMovieTitle() == title) {
			movieList[D][i].increaseQuantity(1);
			return true;
		}
	}
	cout << "ERROR: " << director << ", " << title <<
		" movie does not exist in the store." << endl;
	return false;
}
// Decrement for drama movies
bool MovieList::decrementMovie(const char mediaType, const string & director, const string & title) {
	if (mediaType != DVD) {
		cout << "ERROR: " << mediaType << " is an invalid media type." << endl;
		return false;
	}
	
	// For each movie in the comedy movie bucket
	for (size_t i = 0; i < movieList[D].size(); ++i) {
		Movie* dramaM = movieList[D][i].getMovie();
		// if the values match
		if (dramaM->getDirectorName() == director &&
			dramaM->getMovieTitle() == title) {
			// Values match and it's in stock
			if (movieList[D][i].getQuantity() > 0) {
				movieList[D][i].increaseQuantity(1);
				return true;
			} else { // else quantity is 0
				cout << "ERROR: " << director<< ", " << title <<
					" movie is out of stock." << endl;
				return false;
			}
		}
	}
	cout << "ERROR: " << director << ", " << title <<
		" movie does not exist in the store." << endl;
	return false;

}