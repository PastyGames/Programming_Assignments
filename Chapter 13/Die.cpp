#include <iostream>
#include "Die.h"

using namespace std;
int main(int argc, char *argv[]) 
{
	const int DIE1_SIDES = 6;
	const int DIE2_SIDES = 12;
	const int MAX_ROLLS = 5;
	
	Die die1(DIE1_SIDES);
	Die die2(DIE2_SIDES);
	
	cout << "This simulates the rolling of a " << die1.getSides() << " sided die and a ";
	cout << die2.getSides() << " sided die." << endl;
	cout << "Initial value of the dice:\n";
	cout << die1.getValue() << " " << die2.getValue() << endl;
	
	cout << "Rolling the dice " << MAX_ROLLS << " times.\n";
	
	for (int count = 0; count < MAX_ROLLS; count++)
	{
		die1.roll();
		die2.roll();
		
		cout << die1.getValue() << " " << die2.getValue() << endl;
	}
	
	return 0;
}