// Restaurant bill, $88.67 meal, tax should be 6.75 of the meal
// tip should be 20% of total after tax. display the meal cost
// tax amount, tip amount, and total bill on the screen
#include <iostream>
using namespace std;

int main() 
{
	double meal = 88.67;
	const double tax = .0675;
	double tip = 0.2;
	double totalCost;
	double tipMoney;
	double mealTotal;
	
	totalCost = meal + (meal * tax);
	tipMoney = totalCost * tip;
	mealTotal = totalCost + tipMoney;	
	
	// Meal cost
	cout <<"The meal cost before tax and tip is: $ " << meal << endl;
	
	
	// Total Meal cost
	cout << "After tax and tip the meal will cost: $ " << mealTotal 	<< endl;
	
	// Tax Amount
	cout << "The tax amount is: " << tax << endl;
	
	// Tip Amount
	cout << "The tip amount is: " << tipMoney << endl;
	
	//
	
}