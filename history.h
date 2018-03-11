///////////////////////////////////////////////////////////////////////////////
// Names	  : Tran Le and Nicholas Gorsline
// Date	      : 3/10/2017
// Project    : Assignment 4: Movie Rental Store
// Course     : Pisan, CSS 343
// File Desc  : History file that tracks a users transactions
///////////////////////////////////////////////////////////////////////////////

#ifndef HISTORY_H
#define HISTORY_H

#include <string>
#include <vector>

using namespace std;
class History {
public:
	// Constructor
	History() {};
	// Destructor
	virtual ~History() {};

	// Prints the history vector (bunch of strings)
	// In the following format:
	/*[Action, Movie Media, Movie Genre, Movie Title, Director, Release Year]*/
	void print() const;

	// Adds a new customer transaction, passed in as a string
	void add(const string& customerTransaction); 
private:
	vector<string> history; 
};
#endif // !HISTORY_H