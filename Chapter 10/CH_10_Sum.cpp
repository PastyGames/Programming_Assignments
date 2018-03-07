#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) 
{
	const int NUM_CHAR = 5;
	char nums [NUM_CHAR];
	int total = 0;
	
	cout << "Enter single digit numbers with no spaces: ";
	cin >> nums;
	for (int index = 0; index < strlen(nums); index++)
	{
		total += nums[index] - '0';
	}
	cout << "The total of the numbers is: " << total << endl;
	
	char highest;
	highest = nums[0];
	char lowest;
	lowest = nums[0];
	
	for (int z = 1; z < NUM_CHAR; z++)
	{
		if (highest < nums[z])
		{
			highest = nums[z];
		}
		if (lowest > nums[z])
		{
			lowest = nums[z];
		}
	}
	cout << "The highest number is: " << highest << endl;
	cout << "The lowest number is: " << lowest << endl;
	
	
}