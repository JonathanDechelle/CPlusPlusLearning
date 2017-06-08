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

void VectorExercice()
{
	vector<int> vi;
	for(int i = 0; i < 10; i++)
	{
		vi.push_back(i);
	}

	DisplayMessage("OUTPUT = ");
	DisplayMessage(vi);
	DisplayEndOfLine();

	vector<string> vs;
	DisplayMessage("Enter three words ");
	for(int i = 0; i < 3; i++)
	{
		string s;
		s = InputMessage(s);

		vs.push_back(s);
	}

	DisplayMessage("OUTPUT = ");
	DisplayMessage(vs);
	DisplayEndOfLine();
	Wait();
}