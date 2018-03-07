#include "MORTGAGE.H"
#include <iostream>
#include <iomanip>

using namespace std;
int main(int argc, char *argv[]) 
{
	double loan;
	double rate;
	double years;
	
	cout << "Enter the loan: ";
	cin >> loan;
	cout << "Enter the rate: ";
	cin >> rate;
	cout << "Enter the years: ";
	cin >> years;
	
	Mortgage mort(loan, rate, years);
	cout << fixed << setprecision(2);
	cout << "The monthly payment is: $" << mort.getPayment(loan, rate, years) << endl;
	cout << "Once the loan is paid off, you will pay: $" << mort.getPaid() << endl;
}