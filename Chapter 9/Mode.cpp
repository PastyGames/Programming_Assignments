#include <iostream>
#include <vector>

using namespace std;

// functino prototypes
static vector<int> saveSubscript;
void findMode(int [], int);

int main(int argc, char *argv[]) 
{
	
	const int NUM_ELEMS = 10;
	int numbers[] = {3, 5, 9, 10, 3, 5, 5, 8, 2, 1};
	cout << "The mode is: ";
	findMode(numbers,NUM_ELEMS);
	std::vector<int>::iterator i;
	int holder = 0;
	for ( i = saveSubscript.begin(); i != saveSubscript.end(); i++)
	{
		
		cout << numbers[saveSubscript[holder]] << " ";
		holder++;
	}
	
}
	
void findMode(int mode [], int num)
{
	int * repeater = mode;
	int count = 0;
	int modeHolder [num];
	int high;
	vector<int> idk;
	
	
	for (int z = 0; z < num; z++) 
	{
		for (int i = 0; i < num; i++)
		{
			if ( * repeater == mode[i] ) 
			{
				count++;
			}
		}
		modeHolder[z] = count;
		count = 0;
		repeater++;
	}

	high = mode[0];
	for (int k = 0; k < num; k++)
	{
		if (modeHolder[k] > high)
		{
			high = mode[k];
		}
	}
	
	
	for (int l = 0; l < num; l++)
	{
		if (high == modeHolder[l])
		{
			saveSubscript.push_back(l);
		}
	}
	std::vector<int>::iterator p;
	std::vector<int>::iterator j;
	int holderr = 0;
	int holderrr = 1;
	for (p = saveSubscript.begin(); p != saveSubscript.end(); p++)
	{
		for (j = saveSubscript.begin() + 1; j < saveSubscript.end(); j++) 
		{
			if (saveSubscript[holderr] == saveSubscript[holderr])
			{
				saveSubscript.erase(j);
			}
			holderrr++;
		}
		holderr++;
	}	
}	

