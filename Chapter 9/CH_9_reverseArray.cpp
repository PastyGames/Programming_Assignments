#include <iostream>

using namespace std;

// function prototypes
int *reverseArray (int [], int);

int main(int argc, char *argv[]) 
{
	const int NUM_ELEM = 10;
	int arr [] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	cout << reverseArray(arr, NUM_ELEM);
	
	

	
}

int *reverseArray(int array[], int num)
{
	int newArr[num];
	int reverse = num - 1;
	int * aptr = nullptr;
	for (int i = 0; i < num; i++)
	{
		newArr[reverse] = array[i];
		--reverse;
	}
	cout << &newArr[0] << endl;
	aptr = newArr;
	return aptr;
}



