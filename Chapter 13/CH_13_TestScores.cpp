#include "TESTSCORE.H"
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	double score1, score2, score3;
	cout << "Enter the first score: ";
	cin >> score1;
	cout << "Enter the second score: ";
	cin >> score2;
	cout << "Enter the third score: ";
	cin >> score3;
	
	TestScores tests(score1, score2, score3);
//	test.calcAverage(score1, score2, score3)
}