
// This Program Calculates the user's pay
#include<iostream>
using namespace std;

int main ()
{
	double hours, rate, pay; 
	
	//Get The Number of Hours Worked
	cout << " How many hours did you work? " ;
	cin >> hours;
	
	//Get the hourly pay rate.
	cout << " How much do you get paid per hour? " ;
	cin >> rate;
	
	//Calculate The Pay. 
	pay = hours * rate;
	
	// Display the pay. 
	cout << "You have earned $" << pay << endl;
	return 0;
}
