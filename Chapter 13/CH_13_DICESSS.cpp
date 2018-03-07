#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Die.h"

using namespace std;

// Prototypes
void computerDice(int *, Die);

int main(int argc, char *argv[]) 
{
	// Declarations
		// Integers
	const int DICE = 6;
	int userHand = 0;
	int computerHand = 0;
	int * userptr = &userHand;
	int * computerptr = &computerHand;
	int num;
	unsigned seed = time(0);
	
		// Characters
	char choice;
	
		// Die objects
	Die user(DICE);
	Die computer(DICE);
	
		// seeding, random generator
	srand(seed);
	
	computer.roll();
	computerHand += computer.getValue();
	computerDice(computerptr, computer);
	
	do {
		user.roll();
		userHand += user.getValue();
		cout << "The current value is: " << userHand << endl;
		cout << "Do you wish to roll again? Enter Y or N: ";
		cin >> choice;
	} while (toupper(choice) == 'Y' && userHand <= 21);
	
	cout << endl;
	
	if (*computerptr > *userptr && *computerptr <= 21) 
	{
		cout << "The winner is the computer with: " << computerHand << endl;
		cout << "Users hand was: " << userHand << endl;
	}
	else if(*computerptr > *userptr && *computerptr > 21 && *userptr <= 21)
	{
		cout << "The winner is the user with: " << userHand << endl;
		cout << "Computers hand was: " << computerHand << endl;
	}
	else if(*computerptr < *userptr && *userptr <= 21)
	{
		cout << "The winner is the user with: " << userHand << endl;
		cout << "Computers hand was: " << computerHand << endl;
	}
	else if(*computerptr < *userptr && *userptr > 21 && *computerptr <= 21)
	{
		cout << "The winner is the computer with: " << computerHand << endl;
		cout << "The users hand was: " << userHand << endl;
	}
	else if(*computerptr > 21 && *userptr > 21)
	{
		cout << "No winner" << endl;
		cout << "User busted with: " << userHand << endl;
		cout << "Computer busted with: " << computerHand << endl;
	}
}

void computerDice(int * ptr, Die computer)
{
	int num;
	
			
	switch ( *ptr ) 
	{
		case 1:
		case 2:
		case 3: 
		case 4:
		case 5: 
		case 6:
		case 7:
		case 8:
		case 9: 
		case 10:
		case 11:
			computer.roll();
			*ptr += computer.getValue();
			computerDice(ptr, computer);
			break;
		case 12: 
			num = (rand() % 100) + 1;
			if (num <= 85) 
			{
				computer.roll();
				*ptr += computer.getValue();
				computerDice(ptr, computer);
			}
			else
				break;
			break;
		case 13:
			num = (rand() % 100) + 1;
			if (num <= 80) 
			{
				computer.roll();
				*ptr += computer.getValue();
				computerDice(ptr, computer);
			}
			else
				break;
			break;
		case 14:
			num = (rand() % 100) + 1;
			if (num <= 75) 
			{
				computer.roll();
				*ptr += computer.getValue();
				computerDice(ptr, computer);
			}
			else
				break;
			break;
		case 15:
			num = (rand() % 100) + 1;
			if (num <= 70) 
			{
				computer.roll();
				*ptr += computer.getValue();
				computerDice(ptr, computer);
			}
			else
				break;
			break;
		case 16:
			num = (rand() % 100) + 1;
			if (num <= 55) 
			{
				computer.roll();
				*ptr += computer.getValue();
				computerDice(ptr, computer);
			}
			else
				break;
			break;
		case 17:
			num = (rand() % 100) + 1;
			if (num <= 25) 
			{
				computer.roll();
				*ptr += computer.getValue();
				computerDice(ptr, computer);
			}
			else
				break;
			break;
		case 18:
			num = (rand() % 100) + 1;
			if (num <= 13) 
			{
				computer.roll();
				*ptr += computer.getValue();
				computerDice(ptr, computer);
			}
			else
				break;
			break;
		case 19:
		case 20:
		case 21:
			break;
		default:
			break;
	}
}