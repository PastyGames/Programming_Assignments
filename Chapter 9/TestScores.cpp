s#include <iostream>
#include <string>

using namespace std;

// Function Prototypes
void arrAscendSort(double [], int);
double average(double [], int);

int main(int argc, char *argv[]) 
{
	double *testArray = nullptr;	// pointer to a double array
	int numOfScores;	// holds amount of tests
	cout << "Enter the number of tests: "; // prompt
	cin >> numOfScores; 	// input of amount of tests
	testArray = new double[numOfScores]; // allocate memory for array of test scores
	
	// initialize the array contents
	for (int i = 0; i < numOfScores; i++)
	{
		double score;
		cin >> *(testArray + i);
		while ( *(testArray + i) < 0) 
		{
			cout << "You can't get below an F dummy!" << endl;
			cin >> *(testArray + i);
		} 
	}
	
	// sorting the array
	cout << "The array sorted is: " << endl;
	arrAscendSort(testArray, numOfScores);
	for (int o = 0; o < numOfScores; o++) 
	{
		cout << testArray[o] << endl;
	}
	
	// dropping a test score at the first element
	testArray[0] = 0;

	
	// the average of the tests
	cout << "The average for the tests is: " << average(testArray, numOfScores);
	cout << endl;
	
	
		
	
	
}

double average(double arr[], int num)
{
	double sum = 0;
	for (int i = 0; i < num; i++) 
	{
		sum += arr[i];
	}
	sum /= (num - 1);	// to compensate for the 0'd score, decrement numOfScores
	return sum;
}

void arrAscendSort( double *what, int size)
{
	double holder;
	bool swap;
	do {
		swap = false;
		for (int i = 0; i < size -1; i++) 
		{
			if( *(what + i) > *(what + i + 1) )
			{
				holder = *(what + i);
				*(what + i) = *(what + i + 1);
				*(what + i + 1) = holder;
				swap = true;
			}
		}
		
	} while (swap);
}
	
		
	
	






