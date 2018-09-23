//client.cpp

#include "key.h"
#include "item.h"
#include "dictionary.h"
#include <iostream>
#include <fstream>
using namespace std;

void testOperatorOutput();

int main()
{
	testOperatorOutput();
	return 0;
}

void testOperatorOutput()
{
	Item itemOne;
	Dictionary dictionaryOne;
	bool isFull, isAlreadyThere;
	
	cout << endl << endl;
	cout << "Enter a text on a line followed my meaning on a line: ";
	cin >> itemOne;
	
	dictionaryOne.addNewEntry(itemOne, isFull, isAlreadyThere);
    if (not isFull and not isAlreadyThere)
	{
		cout << dictionaryOne;
	}
	
}