// Sales Tax, compute the tatal sales tax on 95$ purchase, 
// assume sales tax is 4% and the count sales tax is 2%
#include <iostream>
using namespace std;

int main() 
{
	float purchase = 95.0;
	const float state = 0.04;
	const float county = .02;
	float4 totalTax;
	
	// State tax
	totalTax = purchase * state;
	cout << "The purchase tax in state is: $ " << totalTax << endl;
	
	// County Tax
	totalTax = purchase * county;
	cout << "The purchase tax in county is: $ " << totalTax << endl;
	
	return 0;
	
	
	
	
	
}