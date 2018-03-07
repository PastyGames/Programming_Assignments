// This program averages 3 test scores. The braces 
// were inadvertently left out of the if statement
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	const int HIGH_SCORE = 95;
	int score1, score2, score3;
	double average;
	
	// Get the three test scores.
	cout << "Enter 3 test scres and i will average them: ";
	cin >> score1 >> score2 >> score3;
	
	// Calculate and display the average score.
	average = (score1 + score2 + score3) / 3.0;
	cout << fixed << showpoint << setprecision(1);
	cout << "Your average is " << average << endl;
	
	// Error! This if statement is missing its braces!
	if (average > HIGH_SCORE)
	{
		cout <<"Congratulations!\n";
		cout << "That's a high score.\n";
		cout << "You deserve a pat on the back!\n";
	}
	return 0;
}