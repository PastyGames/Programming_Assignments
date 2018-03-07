// This program test for file open errors
#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	ifstream inputFile;
	int number;
	
	// Open the File.
	inputFile.open("BadListOfNumbers.txt");
	
	// If the file successfully opened, process it
	if (inputFile)
	{
		// Read the numbers from the file and display them.
		while (inputFile >> number)
		{
			cout << number << endl;
		}
		
		// Close the file.
		inputFile.close();
	}
	
	else
	{
		// display an error message.
		cout << "Error opening the file.\n";
	}
	
	return 0; 
}