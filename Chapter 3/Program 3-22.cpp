// This program demonstrates a problem that occures
// to use cin.get() to pause a program.
#include <iostream>
using namespace std;

int main() 
{
	char ch;					// define a character variable
	int number;					// define an integer varaible
	
	cout << "Enter a number: ";
	cin >> number;				// Read an integer
	cout << "Enter a character: ";
	ch = cin.get();				// Read a character
	cout<< "Thank you!\n";
	return 0;
	
}