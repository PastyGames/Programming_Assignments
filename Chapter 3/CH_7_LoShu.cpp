#include <iostream>
#include <iomanip>

using namespace std;

static bool isSquare = false;
const int NUM_ELEMS = 3;

void initialize(int[][NUM_ELEMS], int);
bool isLoShu(int[][3], int);


int main(int argc, char *argv[]) 
{
	
	int square[NUM_ELEMS][NUM_ELEMS];
	initialize(square, NUM_ELEMS);
	bool answer = isLoShu(square, NUM_ELEMS);
//	if (answer == true)
//		cout << "That is a Lo Shu Magic Square";
//	else  
//		cout << "That is not a Lo Shu Magic Square";
}

void initialize(int squares[][NUM_ELEMS], int num)
{
	int times = 3;
	for (int i = 0; i < num; i++)
	{
		for (int z = 0; z < num; z++)
		{
			cout << "Enter a number between 1-9, " << times << " more: ";
			cin >> squares[i][z];
			while (squares[i][z] < 1 || squares[i][z] > 9)
			{
				cout << "Invalid number entered, try again: ";
				cin >> squares[i][z];
			}
			--times;
		}
		times = 3;
	}
}

bool isLoShou(int squares[][3], int num)
{
	// check all numbers compared to this one
	int compare = 0;
	int checker = 0;
	for (int i = 0; i < num; i++)
		compare += squares[0][i];
		
	// check if next row is equal to compare
	for (int k = 1; k < 3; k++) 
	{
		for (int z = 0; z < num; z++)
			checker += squares[k][z];
			
			if(checker == compare)
				isSquare = true;
			else  {
				isSquare = false;
				return false;
			}
	}
	
	// reset the checker
	checker = 0;
	
	// check the columns
	for (int a = 0; a < num; a++)
	{
		for (int t = 0; t < num; t++)
			checker += squares[t][a];
			
		if(checker == compare)
			isSquare = true;
		else  {
			isSquare = false;
			return false;
			}
	}
	return isSquare;
}