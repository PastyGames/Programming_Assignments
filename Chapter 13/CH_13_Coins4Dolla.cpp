#include "COINTOSS.H"
#include <iostream>

/* For this assignment you will create a game program using the coin class from programming challenge 12. the program should have three instance of the coin class: one reprsenting a quarter, dime, nickel.
When the game beings your starting balance is $0. during each round of the game the programm will toss the simulatied coins. when a coin is tossed, the value of the coin is added to your balance if it lands heads-up. for exmapl, if the quarter lands heads up, 25 censt is aded to your blanace. Nothing is added to your balance for coins that land tails-up. the game is over when your blanace reaches $1 or more. If you balance is exactly $1 you win the game. you lose if your blaance exceeds $1
*/

using namespace std;
int main(int argc, char *argv[]) 
{
	Coin quarter, dime, nickel;
	const double Q = .25, D = .10, N = .05;
	double balance = 0.0; 
	
	char play;
	cout << "Do you want to play the game? Enter Y or N: ";
	cin >> play;
	
	while (play == 'Y')
	{
		quarter.toss();
		dime.toss();
		nickel.toss();
		
		if (quarter.getSideUp() == "heads")
			balance += Q;
		if (dime.getSideUp() == "heads")
			balance += D;
		if (nickel.getSideUp() == "heads")
			balance += N;
		
		cout << "Your current balance is: " << balance << endl;
		if (balance > 1)
			break;
		
		cout << "Roll one more time? Y or N: ";
		cin >> play;
	}
	
	if (balance == 1) 
		cout << "Winner!!!!" << endl;
	if (balance > 1) 
		cout << "Loser!!!!" << endl;
		
}