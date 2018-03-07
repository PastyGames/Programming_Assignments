#include <iostream>

using namespace std;

struct MonthlyBudget {
	double housing;
	double utilities;
	double householdExp;
	double transportation;
	double food;
	double medical;
	double insurance;
	double entertainment;
	double clothing; 
	double misc;
};

void initialize(MonthlyBudget *);
void monthReport(MonthlyBudget, MonthlyBudget);


int main(int argc, char *argv[]) 
{
	MonthlyBudget budget = {500.00, 150.00, 65.00, 50.00, 250.00, 30.00,100.00, 150.00, 75.00, 50.00};
	MonthlyBudget spent;
	MonthlyBudget * ptr = nullptr;
	ptr = &spent;
	initialize(ptr);
	monthReport(spent,budget);
	
}

void initialize(MonthlyBudget * budg)
{
	cout << "How much did you spend in the following areas!" << endl;
	cout << "Housing: ";
	cin >> (*budg).housing;
	cout << "Utilities: ";
	cin >> (*budg).utilities;
	cout << "HouseHold Expenses: ";
	cin >> (*budg).householdExp;
	cout << "Transportation: ";
	cin >> (*budg).transportation;
	cout << "Food: ";
	cin >> (*budg).food;
	cout << "Medical: ";
	cin >> (*budg).medical;
	cout << "Insurance: ";
	cin >> (*budg).insurance;
	cout << "Entertainment: ";
	cin >> (*budg).entertainment;
	cout << "Clothing: ";
	cin >> (*budg).clothing;
	cout << "Miscellaneous: ";
	cin >> (*budg).misc;
	
	
}

void monthReport(MonthlyBudget bug, MonthlyBudget limit)
{
	const string over = "over by: $";
	const string under = "under by: $";
	double monthBud = bug.housing + bug.utilities + bug.householdExp + bug.transportation + bug.food + bug.medical +
						bug.insurance + bug.entertainment + bug.clothing + bug.misc;
	double monthLim = limit.housing + limit.utilities + limit.householdExp + limit.transportation + limit.food +
						 limit.medical +limit.insurance + limit.entertainment + limit.clothing + limit.misc;
	cout << endl;
	cout << "\t\tBudget Report" << endl;
	
	cout << "Housing- " ;
	if ((limit.housing - bug.housing) < 0 ) 
		cout << over << (limit.housing - bug.housing) << endl;
	else 
		cout << under << (limit.housing - bug.housing) << endl;
		
	cout << "Utilities- ";
	if ((limit.utilities - bug.utilities) < 0) 
		cout << over << (limit.utilities - bug.utilities) << endl;
	else  
		cout << under << (limit.utilities - bug.utilities) << endl;
		
	cout << "Household Expenses- ";
	if ((limit.householdExp - bug.householdExp) < 0) 		cout << over << (limit.householdExp - bug.householdExp) << endl;
	else  
		cout << under << (limit.householdExp - bug.householdExp) << endl;
		
	cout << "Transportation- ";
	if ((limit.transportation - bug.transportation) < 0)
		cout << over << (limit.transportation - bug.transportation) << endl;
	else  
		cout << under << (limit.transportation - bug.transportation) << endl;
		
	cout << "Food- ";
	if ((limit.food - bug.food) < 0) 
		cout << over << (limit.food - bug.food) << endl;
	else  
		cout << under << (limit.food - bug.food) << endl;
		
	cout << "Medical- ";
	if ((limit.medical - bug.medical) < 0) 
		cout << over << (limit.medical - bug.medical) << endl;
	else  
		cout << under << (limit.medical - bug.medical) << endl;
	
	cout << "Insurance- ";
	if ((limit.insurance - bug.insurance) < 0) 
		cout << over << (limit.insurance - bug.insurance) << endl;
	else  
		cout << under << (limit.insurance - bug.insurance) << endl;
	
	cout << "Entertainment- ";
	if ((limit.entertainment - bug.entertainment) < 0)
		cout << over << (limit.entertainment - bug.entertainment) << endl;
	else  
		cout << under << (limit.entertainment - bug.entertainment) << endl;
	
	cout << "Clothing- ";
	if ((limit.clothing - bug.clothing) < 0) 
		cout << over << (limit.clothing - bug.clothing) << endl;
	else  
		cout << under << (limit.clothing - bug.clothing) << endl;
		
	cout << "Miscellaneous- ";
	if ((limit.misc - bug.misc) < 0) 
		cout << over << (limit.misc - bug.misc) << endl;
	else  
		cout << under << (limit.misc - bug.misc) << endl;
		
	if ((monthLim - monthBud) < 0) 
		cout << "Your budget was " << over << (monthLim - monthBud) << endl;
	else  
		cout << "Your budget was " << under << (monthLim - monthBud) << endl;
	
	
}