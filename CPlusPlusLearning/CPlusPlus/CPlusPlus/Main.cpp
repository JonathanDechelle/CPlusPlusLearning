#include <vector>
#include "InputOutput.h"
using namespace std;

int main()
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
	return 0;
}

