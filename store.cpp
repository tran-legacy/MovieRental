#include "store.h"



Store::Store() {
}


Store::~Store() {
}

void Store::populateMovie(string& filename) {
	ifstream infile;
	infile.open(filename);
	if (infile.fail()) {
		cout << "File not found." << endl;
		return;
	}

}
