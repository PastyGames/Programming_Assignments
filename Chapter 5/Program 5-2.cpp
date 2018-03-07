// THis program demonstrates the prefix and postfix modes of the increment and decrement operators
#include <iostream>
using namespace std;

int main() 
{
	int num = 4;
	
	cout << num << endl;		// display 4
	cout << num++ << endl;		// displays 4, then adds 1 to num
	cout << num << endl;		// display 5
	cout << ++num << endl;		// adds 1 to num, then displays 6
	cout << endl;				// displays blank line
	cout << num << endl;		// displays 6
	cout << num-- << endl;		// displays 6, then subtracts 1 from num
	cout << num << endl;		// dislpays 5
	cout << --num << endl;		// subtracts 1 from num , then displays 4
	
	return 0;
	
}