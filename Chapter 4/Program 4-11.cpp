// This program demonstrated the nest if statement.
#include <iostream>
using namespace std;

int main() {
	
	char employed, 		// Currently employed, Y or N
		recentGrad;		// recent graduate, Y or N
		
	// is the user emplyed and a recent graduate?
	cout << "Answer the following questions\n";
	cout << "with either Y for yes or ";
	cout << "N for no.\n";
	cout << "Are you emplyed? ";
	cin >> employed;
	cout << "Have you graduated from college? ";
	cin >> recentGrad;
	
	// Determine the users loan qualifications
	if (employed == 'Y') {
		if (recentGrad == 'Y') {
			cout << "You qualify for the special ";
			cout << "interest rate.\n";
			
		}
		else {
			cout << "You must have graduated from ";
			cout << "college in the past two\n";
			cout << "years to qualify.\n";
		}
			
		}
	else {
		cout << "You must be employed to qualify.\n";
	}
	return 0;
	
	
	
}