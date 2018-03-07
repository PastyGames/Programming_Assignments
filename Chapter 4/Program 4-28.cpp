// This program demonstrates late variable definition
#include <iostream>
using namespace std;

int main() 
{
	// Constant for minimum income and years
	const double MIN_INCOME = 35000.0;
	const int MIN_YEARS = 5;
	
	// Get the annual income. 
	cout << "What is your annual income? ";
	double income;		// variable defintion
	cin >> income;
	
	// Get the number of years at the current job. 
	cout << "How many years have you worked at your current job? ";
	int years; 			// variable definition
	cin >> years;
	
	// Determine the users loan qualifications.
	if (income >= MIN_INCOME || years > MIN_YEARS)
		cout << "You qualify.\n";
	else
	{
		cout 	<< "You must earn at least $"
				<< MIN_INCOME << " or have been employed more than "
				<< MIN_YEARS << " years.\n";
	}
	
}