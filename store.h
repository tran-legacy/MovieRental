#ifndef STORE_H
#define STORE_H

#include "movielist.h"
#include "customerlist.h"
#include <iostream>
#include <fstream>
using namespace std;

class Store {
public:
	// Constructor (empty for now??)
	Store();
	// Destructor (empty for now??)
	virtual ~Store();

	// Populate the movie list from the given file
	void populateMovie(string& file);
	// Reads in the customer list from a file and adds it to the
	// customer list object
	void populateCustomer(string& file);
	void commandHandler(string& file);
	void printCustomerHistory(const string& customer);
	// Prints out the inventory in a *FAnCy* format
	void printInventory();
	
	bool borrowMovie(const string& command);
	bool returnMovie(const string& command);

private:
	CustomerList customerList; 
	MovieList movieList;

	// Helper method for populateMovie
	// This method will extract each token and send it to the movie list
	void addMovieToMovieList(vector<string> tokens);

};
#endif //  !STORE_H


