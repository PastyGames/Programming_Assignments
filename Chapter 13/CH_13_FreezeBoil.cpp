#include "FREEZEBOIL.H"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) 
{		
	double deg;
	char choice;
	cout << "Enter the degrees: ";
	cin >> deg;
	Temp degrees(deg);
	do 
	{
		cout << "Is Ethyl Freezing: " << degrees.isEthylFreezing() << endl;
		cout << "Is Ethyl Boiling: " <<  degrees.isEthylBoiling() << endl;
		
		cout << "Is Water Freezing: " << degrees.isWaterFreezing() << endl;
		cout << "Is Water Boiling: " << degrees.isWaterBoiling() << endl;
		
		cout << "Is Oxygen Freezing: " << degrees.isOxygenFreezing() << endl;
		cout << "Is Oxygen Boiling: " << degrees.isOxygenBoiling() << endl;
		
		cout << "Check another degrees? Enter Y or N: ";
		cin >> choice;
		if (toupper(choice) == 'Y') 
		{
			cout << "Set the new degress to compare: ";
			cin >> deg;
			degrees.setTemp(deg);
		}
		
	
	} while (toupper(choice) == 'Y');
}