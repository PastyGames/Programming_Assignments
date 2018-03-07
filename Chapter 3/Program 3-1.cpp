// This program asks the user to enter the length and width of 
// a rectange. It calculates the rectangle's area and display
// the value on the screen
#include <iostream>
using namespace std;

int main() 
{
	int length, width, area;
	
	cout << "This program calculates the area of a ";
	cout << "rectangle.\n";
	cout << "What is the length of the rectangle? ";
	cin >> length;
	cout << "What is the width of the rectangle? ";
	cin >> width;
	area = width * length;
	cout << "The area of the rectangle is " << area << ".\n";
	return 0;
	
	
}