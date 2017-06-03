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

void GuessMyNumberExercice()
{
	int answer = 7;
	int guess;

	bool foundGuess = false;
	while(!foundGuess)
	{
		DisplayMessage("Guess the number : ");
		cin >> guess;

		if(guess > 7)
		{
			DisplayMessage("The number is too high", true);
		}
		else if(guess < 7)
		{
			DisplayMessage("The number is too low", true);
		}
		else
		{
			DisplayMessage("The number is correct", true);
			foundGuess = true;
		}
	}

	cin >> guess;
}

int main()
{
	GuessMyNumberExercice();
	return 0;
}
