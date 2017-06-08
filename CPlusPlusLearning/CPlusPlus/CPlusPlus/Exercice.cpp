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
			DisplayMessage("The number is too high");
			DisplayEndOfLine();
		}
		else if(guess < answer)
		{
			DisplayMessage("The number is too low");
			DisplayEndOfLine();
		}
		else
		{
			DisplayMessage("The number is correct");
			DisplayEndOfLine();
			foundGuess = true;
		}
	}

	guess = InputMessage(guess);
}