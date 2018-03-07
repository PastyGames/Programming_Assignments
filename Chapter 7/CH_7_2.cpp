#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// function prototypes
void initArray(int [], int);
int highest(int [], int);
int lowest(int [], int);
double average(int);
int total(int [], int);

// static decleration
static int sum = 0;

int main(int argc, char *argv[]) 
{
	// decleration of array
	const int NUM_ELEMS = 12;
	int rainfall[NUM_ELEMS];
	
	// initialize the array
	initArray(rainfall, NUM_ELEMS);
	
	// format the future ouput
	cout << setw(4) << fixed << showpoint << setprecision(2);
	cout << endl;
	
	// get the total of rainfall
	cout << "The total amount of rainfall: " << total(rainfall, NUM_ELEMS) << endl;
	
	// get the average of the rainfall
	cout << "The average of the rainfall: " << average(NUM_ELEMS) << endl;
	
	// get the highest number from the months
	cout << "The highest amount of rainfall in a month was: " << highest(rainfall, NUM_ELEMS) << endl;
	
	// get the lowest number from the months
	cout << "The lowest amount of rainfall in a month was: " << lowest(rainfall, NUM_ELEMS) << endl;
	
}

void initArray(int arr[], int num)
{
	// hold month prompt in array
	string months[] = {"January", "Feburary", "March", "April", "May", "June",
					 "July", "August", "September", "October", "November", "December"};
					
	// prompt
	for (int i = 0; i < num; i++)
	{
		cout << "Enter the rainfall for " << months[i] << ": ";
		cin >> arr[i];
	}
}


int total(int arr[], int num)
{
	for (int i = 0; i < num; i++)
		sum += arr[i];
	return sum;
	
}

double average(int num)
{
	sum /= static_cast<double>(num);
	return num;
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


