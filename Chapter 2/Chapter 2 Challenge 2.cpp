// Challenge, 58% of total sales, predict 8.6million in sales
#include <iostream>
using namespace std;

int main() 
{
	double sales, totalSales; 
	
	sales = 8.6E6;
	
	// calculate how much east coast division makes 
	totalSales = sales / .58;
	
	// Display the sales of east coast division
	cout << "East coast division made: $ " << totalSales << endl;
	return 0; 
	
	
	
}