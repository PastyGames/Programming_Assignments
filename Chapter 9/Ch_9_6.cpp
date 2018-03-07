// Modify program 9-19 ( the united cause study program ) so it can be used with any set of donations. the program should dynamically allocate the donations array and ask the user to input its values
#include <iostream>

using namespace std;

// Function Prototype
void arrSelectSort( int *[], int);
void showArray(const int[], int);
void showArrPtr(int *[], int);

int main(int argc, char *argv[]) 
{
	int num;
	cout << "Enter the size of the arrays: ";
	cin >> num;
	
	const int NUM_SIZE = num;
	
	// array for donations
	int donations[NUM_SIZE];
	
	// pointer array for donations
	int *ptrDonations[NUM_SIZE];
	
	// initialize the array
	for (int i = 0; i < NUM_SIZE; i++)
	{
		cout << "Input value for the array: ";
		cin >> donations[i];
		ptrDonations[i] = &donations[i];
//		cout << *ptrDonations[i];
	}
	
	// Sort the elements of the array of pointers
	arrSelectSort(ptrDonations, NUM_SIZE);
	
	// Display the donations using the array of pointers
	cout << "The donations, sorted in ascending order are: \n";
	showArrPtr(ptrDonations, NUM_SIZE);
	
	// Display the donations in their original order.
	cout << "The donations, in their original order are: \n";
	showArray(donations, NUM_SIZE);
	return 0;
}

void arrSelectSort(int *arr[], int size)
{
	int startScan, minIndex;
	int *minElem;
	
	for (int startScan = 0; startScan < (size - 1); startScan++ )
	{
		minIndex = startScan;
		minElem = arr[startScan];
		for (int index = startScan; index < size; index++) 
		{
			if ( * (arr[index]) < *minElem) 
			{
				minElem = arr[index];
				minIndex = index;
			}
		}
		arr[minIndex] = arr[startScan];
		arr[startScan] = minElem;
	}
}

void showArray(const int arr[], int size)
{
	for (int count = 0; count < size; count++)
		cout << arr[count] << " ";
	cout << endl;
}

void showArrPtr(int *arr[], int size)
{
	for (int count = 0; count < size; count++)
		cout << *arr[count] << " ";
	cout << endl;
}