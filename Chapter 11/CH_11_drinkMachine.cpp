#include <iostream>

using namespace std;



struct Machine {
	string drinkName;
	double cost;
	double numOfDrinks;
	
};
void display(Machine[]);
int main(int argc, char *argv[]) 
{
	Machine drinks [] = { {"Cola", .75, 20}, {"Root Beer", .75, 20}, {"Lemon-Lime", .75, 20}, {"Grade Soda", .80, 20},
							 {"Cream Soda", .80, 20} };
	const int QUIT = 999;
	int choice;
	double paid;
	double total;
	char again;
	display(drinks);
	for (int i = 0; i < 20; i++) 
	{
		
		cout << "Make your choice or enter 999 to terminate: ";
		cin >> choice;	
		if (choice == QUIT) 
			exit(0);
		while (choice != QUIT) 
		{
			cout << "You must enter " << drinks[choice - 1].cost << " cents" << endl;
			cout << "How much did you enter: ";
			cin >> paid;
			cout << "Your change is: " << (paid - drinks[choice -1].cost) << endl;
			drinks[choice - 1].numOfDrinks--;
			total += drinks[choice - 1].cost;
			cout << "Enter y for another drink or n to complete the transaction: ";
			cin >> again;
			
			if (toupper(again) == 'Y') 
				display(drinks);
			else 
				cout << "The machine earned " << total << " today!" << endl;;
				exit(0);
			
			cin >> choice;
			if (choice == QUIT)
			{
				cout << "The machine earned " << total << " today!" << endl;;
				exit(0);
			}
		}
	}
	
}
void display(Machine dranks [])
{
	cout << "\t\tThe Drink Machine" << endl;
	cout << "Enter 1 for: " << dranks[0].drinkName << endl;
	cout << "Enter 2 for: " << dranks[1].drinkName << endl;
	cout << "Enter 3 for: " << dranks[2].drinkName << endl;
	cout << "Enter 4 for: " << dranks[3].drinkName << endl;
	cout << "Enter 5 for: " << dranks[4].drinkName << endl;
}