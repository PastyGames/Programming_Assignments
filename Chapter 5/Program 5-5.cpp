// This program calculates the number of soccer teams that a youth league may create from the number of available players. Input validation is demonstrated with while loops.
#include <iostream>
using namespace std;

int main() 
{
	// Constants for minimum and maximim players
	const int 	MIN_PLAYERS = 9,
				MAX_PLAYERS = 15;
				
	// variables
	int 	players,					// Number of available players
			teamPlayers,				// number of desired players per team
			numTeams,					// number of teams
			leftOver;					// number of players left over
			
	// Get the number of player per team
	cout << "How many players do you wish per team? ";
	cin >> teamPlayers;
	
	// Validate the input
	while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS)
	{
		// explain the error
		cout << "You should have at least " << MIN_PLAYERS << " but no more than " << MAX_PLAYERS << "per team.\n";
		
		// get the input again.
		cout << "How many players do you wish per team? ";
		cin >> teamPlayers;
	}
	
	// Get the number of players available
	cout << "How many players are available? ";
	cin >> players;
	
	// validate input 
	while (players <= 0) 
	{
		// Get the input again.
		cout << "Please enter 0 or greater: ";
		cin >> players;
	}
	
	// calculate the number of teams
	numTeams = players / teamPlayers;
	
	// calculate the number of leftover players.
	leftOver = players % teamPlayers;
	
	// Display the results 
	cout << "There will be " << numTeams << " teams with " << leftOver << " players left over.\n";
	return 0;
	
}