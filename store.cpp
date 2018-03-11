#include "store.h"
#include <iostream>
#include <sstream>
#include <string>


Store::Store() {
}


Store::~Store() {
}

// Helper method for populateMovie
// This method will extract each token and send it to the movie list
void Store::addMovieToMovieList(vector<string> tokens) {
	char genre;
	string director, title, majorActor;
	int quantity, year, month;
	// vector guarantees consistent numbering, index 0 = genre, 1 = quantity
	// 2 = director, 3 = title, and based on genre, index 4 is handled below
	genre = tokens[0][0];
	quantity = stoi(tokens[1]);
	director = tokens[2];
	title = tokens[3];
	// Check if classic movie, if so need to extract additional data
	// Major actor and month

	// Create vector to hold tokens of element 4
	vector<string> elementToken;
	string cToken;
	char delimeter = ' ';
	istringstream tokenStream(tokens[4]);
	// Break token up using space as delimeter
	while (getline(tokenStream, cToken, delimeter)) {
		elementToken.push_back(cToken);
	}
	if (elementToken.size() > 1) {
		// Getting major actor first and last name
		majorActor = elementToken[0] + " " + elementToken[1];
		// Getting month and convert to int
		month = stoi(elementToken[2]);
		// Get year and convert to int
		year = stoi(elementToken[3]);

		// Adding the movie to the movie list
		movieList.addMovie(genre, director,
			title, year, majorActor, month, quantity);
	}

	// Either a comedy or drama movie
	else {
		year = stoi(elementToken[0]);

		// Adding the movie to the movie list
		movieList.addMovie(genre, director, title, year, quantity);
	}

}

// Populate the movie list from the given file
void Store::populateMovie(string& filename) {
	// Opening movie source
	ifstream infile;
	infile.open(filename);
	// Check to make sure the file exists
	if (infile.fail()) {
		cout << "The file was not found." << endl;
		return;
	}
	// Creaating the delimeter to break up the string
	string delimiter = ", ";
	// String to catch the line
	string line;

	// Loop through each line in the file
	while (getline(infile, line)) {
		// Create a sstream on the line
		istringstream iss(line);
		// Keep track of position in the line
		size_t pos = 0;
		// Hold the current token
		string token;
		// Vector to hold all of the tokens found
		vector<string> tokenList;

		// Loop through each element in the line
		while ((pos = line.find(delimiter)) != string::npos) {
			token = line.substr(0, pos);
			// Adding token to vector
			tokenList.push_back(token);
			line.erase(0, pos + delimiter.length());
		}
		// Catching last token
		tokenList.push_back(line);
		// Calling helper to add movie to movielist
		addMovieToMovieList(tokenList);
		// Clear vector for next movie
		tokenList.clear();
	}
}

// Reads in the customer list from a file and adds it to the
// customer list object
void Store::populateCustomer(string & filename){
	ifstream infile;
	infile.open(filename);
	// Check to make sure the file exists
	if (infile.fail()) {
		cout << "The file was not found." << endl;
		return;
	}
	string line;
	// Loop through each line in the file
	while (getline(infile, line)) {
		vector<string> tokenList;
		string token;
		char delimeter = ' ';
		istringstream tokenStream(line);
		// Break line up using space as delimeter
		while (getline(tokenStream, token, delimeter)) {
			tokenList.push_back(token);
		}
		int customerID = stoi(tokenList[0]);
		string customerName = tokenList[1] + " " + tokenList[2];
		customerList.addCustomer(customerID, customerName);
	}
}

void Store::commandHandler(string& filename){
	ifstream infile;
	infile.open(filename);
	// Check to make sure the file exists
	if (infile.fail()) {
		cout << "The file was not found." << endl;
		return;
	}
	string line;
	while (getline(infile, line)) {
		char command = line[0];
		switch (command) {
			case 'B':
				cout << "HIT BORROW" << endl;
				//borrowMovie(line);
				break;
			case 'R':
				cout << "HIT RETURN" << endl;
				//returnMovie(line);
				break;
			case 'I':
				cout << "HIT INVENTORY" << endl;
				//printInventory();
				break;
			case 'H':
				cout << "HIT HISTORY" << endl;
				//printCustomerHistory(line);
				break;
			default:
				cout << "ERROR: '" << command << "' is not a valid command." << endl;
				break;
		}
	}

}

// maybe need helper for parsing command, or change param to line (command)
void Store::printCustomerHistory(const string & customer){
	// When this method is called, the line is guranteed to start with H
	// Pare the string first: H 1222
	vector<string> tokenList;
	string token;
	char delimeter = ' ';
	istringstream tokenStream(customer);
	// Break line up using space as delimeter
	while (getline(tokenStream, token, delimeter)) {
		tokenList.push_back(token);
	}
	int customerID = stoi(tokenList[1]);

	Customer* customerPtr = customerList.getCustomer(customerID);
	// getCustomer() will return nullptr if it couldn't find it
	if (customerPtr == nullptr) {  
		cout << "Customer with ID#" << customerID << " could not be found." << endl;
		return;
	} else {  // else it did find it, print the history
		customerPtr->printHistory(); 
	}
}

// Calls printMovies which will print out the inventory
void Store::printInventory(){
	movieList.printMovies();
}

bool Store::borrowMovie(const string & command)
{
	cout << "BORROW MOVIE, not implemented yet" << endl;
	return false;
}

bool Store::returnMovie(const string & command)
{
	cout << "RETURN MOVIE, not implemented yet" << endl;
	return false;
}
