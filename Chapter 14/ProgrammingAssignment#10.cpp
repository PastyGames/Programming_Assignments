// WARNING WARNING WARNING WARNING WARNING WARNING WARNING WARNING WARNING
// 			Place Convert.h in same folder as this program
// created by Demauri Portis :D 
#include "CONVERT.H"
#include <iostream>

using namespace std;

//prototype
void displayMenu(Convert &);
int main(int argc, char *argv[]) 
{
	// requirements
	cout << "This program can convert a decimal number ranging from 1- 1048576, to octal or hex" << endl;
	cout << "To start off we shall convert 100 to its octal and hex form." << endl;
	Convert thisNum(100);
	cout << thisNum.getNum() << " in decimal is equal to: " << thisNum.getHex() << " in hex." << endl;
	cout << thisNum.getNum() << " in decimal is equal to: " << thisNum.getOctal() << " in octal." << endl;

	displayMenu(thisNum);
	
		
}
void displayMenu(Convert &thisNum)
{
	int choice;
	cout << endl;
	cout << "What would you like to do next?" << endl;
	cout << "1. Enter a new number to convert" << endl;
	cout << "2. Get the hexadecimal value of the current number" << endl;
	cout << "3. Get the octal value of the current number" << endl;
	cout << "4. Quit the program" << endl;
	cout << "Enter choice: ";
	cin >> choice;
	while (choice != 4) 
	{
		switch (choice) 
		{
			case 1:
				int newNum;
				cout << "Enter your new number: ";
				cin >> newNum;
				thisNum.setNum(newNum);
				displayMenu(thisNum);
				break;
			case 2: 
				cout << endl;
				cout << thisNum.getNum() << " in decimal is equal to: " << thisNum.getHex() << " in hex." << endl;
				displayMenu(thisNum);
				break;
			case 3:
				cout << endl;
				cout << thisNum.getNum() << " in decimal is equal to: " << thisNum.getOctal() << " in octal." << endl;
				displayMenu(thisNum);
				break;
			default: 
				cout << "That was not a valid choice, try again!" << endl;
				displayMenu(thisNum);
				break;
		}
	}
	cout << "You have chosen to quit the program" << endl;
	exit(0);
	
}