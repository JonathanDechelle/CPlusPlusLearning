#include "InputOutput.h"

void GuessMyNumberExercice()
{
	int answer = 7;
	int guess = 0;

	bool foundGuess = false;
	while(!foundGuess)
	{
		DisplayMessage("Guess the number : ");
		guess = InputMessage(guess); 

		if(guess > answer)
		{
			DisplayMessage("The number is too high", true);
		}
		else if(guess < answer)
		{
			DisplayMessage("The number is too low", true);
		}
		else
		{
			DisplayMessage("The number is correct", true);
			foundGuess = true;
		}
	}

	guess = InputMessage(guess);
}

int main()
{
	GuessMyNumberExercice();
	return 0;
}
