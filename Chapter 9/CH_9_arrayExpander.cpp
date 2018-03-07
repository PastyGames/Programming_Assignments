#include <iostream>

using namespace std;

int * arrayExpander(int [], int);

int main(int argc, char *argv[]) 
{
	const int NUM_ELEM = 10;
	int arr [] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	cout << arrayExpander(arr, NUM_ELEM) << endl;
	
}

int * arrayExpander(int arr [], int num)
{
	num *= 2;
	int newArr[num];
	int * ptr = nullptr;
	
	for (int i = 0; i < num; i++)
	{
		if (i >= (num / 2) ) 
			newArr[i] = 0;
		else  
			newArr[i] = arr[i];
	}
	ptr = newArr;
	
	for (int z = 0; z < num; z++)
	{
		cout << newArr[z] << endl;
	}
	return ptr;
}