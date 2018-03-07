// Annual pay, paid every 2 weeks, and earns 2,200 each pay period
// in a year employee gets paid 26 times, write a program defining
// the variables
#include <iostream>
using namespace std;

int main() 
{
	double payAmount = 2200.0;
	int payPeriods = 26;
	double annualPay = payAmount * payPeriods;
	
	cout << "The annual pay to that employee is: $ " << annualPay << 	endl;
	
	
}