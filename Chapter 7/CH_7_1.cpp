#include <iostream>
#include <iomanip>

using namespace std;

// function prototypes
 void initArray(int [], int);
int highest(int [], int);
int lowest(int [], int);

int main(int argc, char *argv[]) 
{
	// decleration of array
	const int NUM_ELEMS = 10;
	int array [NUM_ELEMS];
	
	// initilizing the array
	initArray(array, NUM_ELEMS);
	
	// formatting ouput
	cout << setw(4) << fixed << right << showpoint; 
	
	// find the highest number
	cout << "The highest number is: " << highest(array, NUM_ELEMS) << endl;
	
	// find the lowest number
	cout << "The lowest number is: " << lowest(array, NUM_ELEMS) << endl;
	
	return 0;
}

void initArray(int arr[], int num)
{
	cout << "Enter " << num << " numbers for the array, seperate with space: ";
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
}

int highest(int arr[], int num)
{
	int high = arr[0];
	for (int i = 0; i < num; i++)
	{
		if (arr[i] > high)
		{
			high = arr[i];
		}
	}
	return high;
}

int lowest(int arr[], int num)
{
	int low = arr[0];
	for (int i = 0; i < num; i++)
	{
		if (arr[i] < low)
		{
			low = arr[i];
		}
	}
	return low;
}