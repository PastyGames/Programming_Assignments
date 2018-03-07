// This program demonstrated he ensted if statement. 
#include <iostream>
using namespace std;

int main() {
	char employed, 		// currently employed Y, or N
		recentGrad;		// recent graduate, Y or N
		
	// Is the user employed and a recent graduate
	cout << "Answer the following questions\n";
	cout << "with either Y for yes or ";
	cout << "N for no.\n";
	cout << "Are you employed? ";
	cin >> employed;
	cout << "Have you graduated from college? ";
	cin >> recentGrad;
	
	// Determine the users loan qualifications.
	if (employed == 'Y') {
		if (recentGrad == 'Y')	// Nested if
		 {
			cout << "You qualify for the special ";
			cout << "interest rate.\n";
			return 0;
			
		}
		
	}
	
	
	
}