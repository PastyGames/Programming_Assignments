// Written by Demauri Portis
// C++ Sep 22

#include <iostream>

// function prototypes
int stringlength(char *);

using namespace std;
int main(int argc, char *argv[]) 
{
	const int NUM_CHARS = 20;
	char word [NUM_CHARS];
	cout << "Enter a string up to 20 characters long" << endl;
	cin.getline(word, NUM_CHARS);
	cout << "The amount of characters in the string is: " << stringlength(word) << endl;
	
}
int stringlength(char * cptr)
{
	int count = 0;
	
	while (*cptr != '\0')
	{
		count++;
		cptr++;
	}
	return count;
}