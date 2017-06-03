#include <iostream>
#include <string>
using namespace std;

void DisplayMessage(string aMessage)
{
	cout << aMessage;
}

void DisplayMessage(string aMessage, bool aEndOfFile)
{
	if(!aEndOfFile)
	{
		DisplayMessage(aMessage);
		return;
	}

	cout << aMessage << endl;
}

int InputMessage(int aMessage)
{
	cin >> aMessage;
	return aMessage;
}