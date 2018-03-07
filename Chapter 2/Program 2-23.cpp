// This program calculates the sale price of an item
// that is regulary priced at $59.95, with a 20 percent
// discount subtracted.
#include <iostream>
using namespace std;

int main() 
{
	// Variable is hold the regular prices, the 
	// amount of a disount, and the sale price.
	double regularPrice = 59.95, discount, salesPrice;
	
	// Calculate the amount of a 20% discount.
	discount = regularPrice * 0.2;
	
	// Calculate the sale price by subtratice the 
	// discount from the regular price.
	salesPrice = regularPrice - discount;
	
	// Display the results.
	cout << "Regular price: $" << regularPrice << endl;
	cout << "Discount amount: $" << discount << endl;
	cout << "Sales price: $" << salesPrice << endl;
	return 0;
	
	
	
	
}