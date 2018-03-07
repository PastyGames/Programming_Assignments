// This program has two function: main and displayMessage
#include <iostream>
using namespace std;

//***************************************
// Definition of function displayMessage*
// This function display a greeting.    *
//***************************************

void displayMessage()
{
	cout << "Hello from the function displayMessage.\n";
}

//****************
// Function Main *
//****************

int main() 
{
	cout << "Hello from main.\n";
	displayMessage();
	cout << "Back in function main again.\n";
	return 0;
}