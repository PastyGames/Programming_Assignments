#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Function prototypes
void displaySalsa(string [], int [], int);

int main(int argc, char *argv[]) 
{
	// Declaration of arrays
	 const int NUM_ELEMS = 5;
	string salsa[] = {"mild", "medium", "sweet", "hot", "zesty"};
	int numOfJars[NUM_ELEMS];
	
	// prompt for amount of jars sold
	cout << "Enter how many jars were sold for each flavor!" << endl;
	
	for (int i = 0; i < NUM_ELEMS; i++) 
	{
		cout << "How many jars were sold for " << salsa[i] << " last month: ";
		cin >> numOfJars[i];
	}
	displaySalsa(salsa, numOfJars, NUM_ELEMS);
	
}

void displaySalsa(string sauce[], int num[], int limit)
{
	cout << "\t\t\tSalsa Sales Report" << endl;
	for (int i = 0; i < limit; i++)
	{
		cout << fixed << left;
		cout << "Amount sold for " << sauce[i] << ": " << num[i] << endl;
	}
}