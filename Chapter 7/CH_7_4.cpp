#include <iostream>
#include <iomanip>

// function prototype
void greaterThan(int[], int, int);

using namespace std;

int main(int argc, char *argv[]) 
{
	int n;
	const int NUM_ELEM = 10;
	cout << "Enter the variable you want to compare: ";
	cin >> n;
	
	int arr[] = {10, 11, 13, 7, 10, 15, 32, 9, 10, 11};
	
	greaterThan(arr, n, NUM_ELEM);
}

void greaterThan(int array[], int n, int num)
{
	cout << fixed << setw(5);
	cout << "Numbers greater than " << n << " in the array"<< endl;
	for (int i = 0; i < num; i++)
	{
		if (array[i] > n)
			cout << array[i] << endl;
	}
}


