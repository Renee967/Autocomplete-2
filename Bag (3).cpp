#include "Bag.h"
#include <iostream>
using namespace std;
Bag::Bag()
{
	name = " ";
	count = 0;
	items = new string[0];
	numItems = 0;
}
void Bag::bubbleSort()
{
	
		int i, j;
		for (i = 0; i < numItems - 1; i++)

			// Last i elements are already in place 
			for (j = 0; j < numItems - i - 1; j++)
			{
				if (items[j] >items[j + 1])
				{
					string temp = items[j];
					items[j] = items[j + 1];
					items[j + 1] = temp;
				}
			}

	
}
Bag::Bag(string n, int c,int num, string* in) 
{
	name = n;
	count = c;
	items = in;
	numItems = num;
}
int Bag::getCount() const
{
	return count;
}
void Bag::append(string n)
{
	if (numItems < count)
	{
		items[numItems] = n;
		numItems++;
	}
}
void Bag::displayAll()
{
	for (int i = 0; i < numItems; i++)
	{
		cout << items[i] << endl;
	}
}
bool Bag::search(string in) //needs to be O(log(n))
{
	bool flag = false;
	if (in.size() < 3)
	{
		displayAll();
		return true;
	}
	else
	{
		
		for (int i = 0; i < numItems; i++)
		{
			string substring = items[i].substr(0, in.size());
			if (substring == in)
			{
				cout << items[i] << endl;
				flag = true;
			}


		}
	}
	return flag;
}