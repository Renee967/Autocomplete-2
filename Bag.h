#ifndef BAG_H
#define BAG_H
#include <string>
using namespace std;
class Bag
{
private:
	string name;
	string* items;
	int count;
	int numItems;
public:
	Bag();
	Bag(string n, int c,int num, string* in);
	int getCount() const;
	void displayAll();
	bool search(string in);
	void append(string n);
	void bubbleSort();
};

#endif

/*
- the name of the collection

- an array of items

- variable to keep track of the number of items

- method displayAll

- method search ( for autocomplete )
*/