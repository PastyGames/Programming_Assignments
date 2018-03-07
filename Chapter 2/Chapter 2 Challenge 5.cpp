// 28,32,37,24,33 variables, first sum them in sum, sum divide by 
// 5 to get average display average
#include <iostream>
using namespace std;

int main() 
{
	double a,b,c,d,e, sum, average;
	a = 28.0;
	b = 32.0;
	c = 37.0;
	d = 24.0;
	e = 33.0;
	
	// The total of all variables
	sum = a + b + c + d + e;
	cout << "The sum of all numbers is: " << sum << endl;
	
	// The average of the sum
	average = sum / 5;
	cout << "The average of all variables is: " << average << endl;
	
	
	
	
}