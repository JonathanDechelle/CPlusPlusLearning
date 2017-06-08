#include <iostream>
#include <string>
#include <vector>
using namespace std;

void DisplayEndOfLine()
{
	cout << endl;
}

void DisplayMessage(string aMessage)
{
	cout << aMessage;
}

void DisplayMessage(int aMessage)
{
	cout << aMessage;
}

void DisplayMessage(vector<string> aMessages)
{
	int count = aMessages.size();
	for(int i = 0; i < count; i++)
	{
		DisplayMessage(aMessages[i]);
		DisplayMessage(" ");
	}
}

//TODO refactor
void DisplayMessage(vector<int> aMessages)
{
	int count = aMessages.size();
	for(int i = 0; i < count; i++)
	{
		DisplayMessage(aMessages[i]);
		DisplayMessage(" ");
	}
}

int InputMessage(int aMessage)
{
	cin >> aMessage;
	return aMessage;
}

string InputMessage(string aMessage)
{
	cin >> aMessage;
	return aMessage;
}

void Wait()
{
	cout << "Wait input .... ";

	string lol = "";
	cin >> lol;
}