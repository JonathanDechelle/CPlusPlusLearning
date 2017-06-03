#include <iostream>
using namespace std;

int main()
{
	int answer = 7;
	int guess;

	bool foundGuess = false;
	while(!foundGuess)
	{
		cout << "Guess the number : ";
		cin >> guess;

		if(guess > 7)
		{
			cout << "The number is too high" << endl;;
		}
		else if(guess < 7)
		{
			cout << "The number is too low" << endl;;
		}
		else
		{
			cout << "The number is correct" << endl;;
			foundGuess = true;
		}
	}

	cin >> guess;
	return 0;
}
