// This program calculate the circumference of a circle.
#include <iostream>
using namespace std;

int main() 
{
	// Constants
	const double PI = 3.14159;
	const double DIAMETER = 10.0;
	
	// variable to hold the circumference
	double circumference;
	
	// calculate the circumference
	circumference = PI * DIAMETER;
	
	// display the circumference
	cout << "The circumference is: " << circumference<< endl;
	return 0;
	
}