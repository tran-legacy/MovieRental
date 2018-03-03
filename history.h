#ifndef HISTORY_H
#define HISTORY_H

#include <string>
#include <vector>

using namespace std;
class History {
public:
	History() {};
	virtual ~History() {};
	void print() const;
	void add(const string& customerTransaction); 
private:
	vector<string> history; 
};
#endif // !HISTORY_H