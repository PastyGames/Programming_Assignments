// This program demonstrates the logical || operator.
#include <iostream>
using namespace std;

int main() 
{
	// constants for minimum income and years
	const double MIN_INCOME = 35000.0;
	const int MIN_YEARS = 5;
	
	double income;	// annual income
	int years;		// years at the current job
	
	// get the annual income
	cout << "What is your annual income? ";
	cin >> income;
	
	// get the number of years at the current job.
	cout << "How many years have you worked at your current job ";
	cin >> years;
	
	// Determine the users qualifications.
	if (income>= MIN_INCOME || years > MIN_YEARS)
		cout << "You qualify.\n";
	else{
		cout << "You must earn at least $";
		cout << MIN_INCOME << " or have been";
		cout << "employed more than " << MIN_YEARS;
		cout << " years.\n";
	}
	return 0;
	
}