// This program calculates the charges for DVD rentals. Every third DVD is free
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	int dvdCount = 1;					// DVD counter
	int numDvds;						// Number of Dvds renter
	double total = 0.0;					// Accumulator
	char current;						// Current realease Y or N
	
	// Get the number of Dvd's
	cout << "how many DVDs are being rented ";
	cin >> numDvds;
	
	// Determine the charges
	do
	{
		if ((dvdCount % 3) == 0)
		{
			cout << "DVD #" << dvdCount << " is free!\n";
			continue;					// immediately start the next iteration
		}
		
		cout << "Is DVD #" << dvdCount;
		cout << " a current release? (Y/N) ";
		cin >> current;
		if(current == 'Y' || current == 'y')
			total += 3.50;
		else
			total += 2.50;
	}
	while (dvdCount++ < numDvds);
	
	// Display the total
	cout << fixed << showpoint << setprecision(2);
	cout << "The total is $" << total << endl;
	return 0;
	
}