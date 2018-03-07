// THis program demonstrates the && logical operator.
#include <iostream>
using namespace std;

int main() 
{
	char employed,		// currently employed, Y or N
		recentGrad;		// recent graduate, Y or N
		
	// is the user employed and a recent graduate?
	cout << "Answer the following questions\n";
	cout << "with either Y for Yes or N for no.\n";
	
	cout << "Are you employed? ";
	cin >> employed;
	
	cout << "Have you graduated from college in the past two years? ";
	cin >> recentGrad;
	
	// Determing the users loan qualifications.
	if (employed == 'Y' && recentGrad == 'Y')
	{
		cout << "You qualify for the special interest rate.\n";
		
	}
	else {
		cout << "You must be employed and have graduated from\n";
		cout << "college in the past two years to qualify.\n";
	}
	return 0;
	
}