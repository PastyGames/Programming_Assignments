#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

// statics
static vector<int> saveSubscript;

// Function Prototypes
void findAvg(int *, int);
void findMedian(int *, int);
void findMode(int *, int);
void display();

int main(int argc, char *argv[]) 
{
	int number;
	int *iptr = nullptr;
	int array[number];
	cout << "How many students were surveyed: ";
	cin >> number;
	
	iptr = new int[number];
	
	for (int i = 0; i < number; i++)
	{
		cout << "Enter the numer of movies the student saw: ";
		cin >> iptr[i];
		array[i] = iptr[i];
	}
	display();
	findAvg(iptr, number);
	findMedian(iptr, number);
	findMode(array, number);
		
}

void findAvg(int * ptr, int num)
{
	double total = 0;
	for (int z = 0; z < num; z++)
	{
		total += ptr[z];
		
		
	}
	cout << fixed << setprecision(2);
	cout << "The average is: " << total / num << endl;
}
	
void findMedian(int * ptr, int num)
{	
	vector<int> myVector (ptr, ptr+num);
	std::sort(myVector.begin(), myVector.end() );
		
	for (int i = 0; i < num; i++)
	{
		ptr[i] = myVector[i];
	}
	double middle = num / 2.0;
	double median;
	if (fmod(num, 2.0) == 0) 
	{
		cout << middle;
		cout << "The median is: " << ( ( ( ptr[(int)(middle)] ) + ( ptr[(int)(middle - 1)]) ) / 2.0  ) << endl;
		
	} else {
		median = fmod(num , 2.0);
		cout << "The median is: " << ptr[(int)floor(middle)] << endl;
		
		
					}
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

void display()
{
	cout << endl;
	cout << "\t\t\tMOVIE STATISTICS" << endl;
}


