#include <iostream>
#include <vector>

using namespace std;

// Function Prototype
void findMode(int *, int);

int main(int argc, char *argv[]) 
{
	const int NUM = 10;
	int *iptr = nullptr;
	
	int array[] = {10, 20, 30, 10, 20, 10, 40, 50, 60, 1};
		
	iptr = new int[NUM];
		
	for (int i = 0; i < NUM; i++)
	{
			iptr[i] = array[i];
	}
	
	findMode(iptr, NUM);

	
}
void findMode(int * ptr, int num)
{
	vector<int> myVector (ptr, ptr+num);
	std::sort(myVector.begin(), myVector.begin() + (num - 1));
	
	
	for (int i = 0; i < num; i++)
	{
		ptr[i] = myVector[i];
	}
	
	int count = 0;
	int counter = 0;
	int subscript;
	
	for (int k = 0; k < num; k++)
	{
		if (ptr[k] == ptr[k + 1]) 
		{
			count++;
		} else {
			if (count > counter) 
			{
				counter = count;
				subscript = k;
				count = 0;

			}
		}
	}
	if (counter > 0) {
		cout << "The mode is: " << ptr[subscript];
	} else {
		cout << "There is no mode";
	}
}
		
