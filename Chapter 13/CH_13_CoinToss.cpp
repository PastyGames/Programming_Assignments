#include "COINTOSS.H"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) 
{
	Coin quarter;
	int headCount = 0;
	int tailCount = 0;
	
	cout << "The initiale state of the coin: " << quarter.getSideUp() << endl;
	
	for (int i = 0; i < 20; i++) 
	{
		quarter.toss();
		cout << "The flip result: " << quarter.getSideUp() << endl;
		if (quarter.getSideUp() == "heads")
			headCount++;
		else if (quarter.getSideUp() == "tails") 
			tailCount++;
	}
	cout << "There was a total of " << headCount << " head flips!" << endl;
	cout << "There was a total of " << tailCount << " tail flips!" << endl;
}
