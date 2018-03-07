// This program demonstrates that change to a function parameter
// have no effect on the origrinal arguement.
#include <iostream>
using namespace std;

// Function Prototype
void changeMe(int);

int main() 
{
	int number = 12;
	
	// Display the value in number.
	cout << "number is " << number << endl;
	
	// Call changeMe, passing the balue in number as an arguement
	changeMe(number);
	
	// Dis play the value in number again.
	cout << "Now back in main again, the value of ";
	cout << "number is " << number << endl;
	return 0; 
}

//**********************************************************
// Definition of function changeMe.                        *
// This function changes the value of the parameter MyValue*
//**********************************************************

void changeMe(int myValue)
{
	// change the value of myValue to 0.
	myValue = 0;
	
	// Display the value in myValue.
	cout << "Now the value is " << myValue << endl;
}