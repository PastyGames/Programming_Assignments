// This program calculates hourly wages, including overtime.
#include <iostream>
using namespace std;

int main() 
{
	double regularWages, 				// To hold regular wages
			basePayRate = 18.25,		// Base pay rate
			regularHours = 40.0,		// Hours worked less overtime
			overtimeWages,				// To hold overtime wages
			overtimePayRate = 27.78,	// Overtime pay rate
			overtimeHours = 10,			// Overtime hours worked
			totalWages;					// To hold total wages
			
	// calculate the regular wages
	regularWages = basePayRate * regularHours;
	
	// calculate the overtime wages
	overtimeWages = overtimePayRate * overtimeHours;
	
	// calculate the total wages
	totalWages = regularWages + overtimeWages;
	
	// display the total wages
	cout << " Wages for this week are $" << totalWages << endl;
	return 0;
	
	
}