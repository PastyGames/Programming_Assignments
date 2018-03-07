#ifndef PAYROLL_H
#define PAYROLL_H
#include <iostream>

using namespace std;

class Payroll {
	private:
		double hourlyRate;
		int hoursWorked;
		double totalPay;
	public: 
		Payroll(double h, int w)
		{
			hourlyRate = h;
			hoursWorked = w;
			totalPay = hourlyRate * hoursWorked;
			
			cout << "The total pay is: $" << totalPay << endl;
		}
}; 
#endif
