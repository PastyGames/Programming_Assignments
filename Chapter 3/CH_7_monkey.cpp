#include <iostream>
#include <string>

using namespace std;

void createReport(string[], int[][5], int, int);
int main(int argc, char *argv[]) 
{
	const int monkeys = 3;
	const int weekdays = 5;
	int monkeyEating[monkeys][weekdays]; 
	string days[] = {"Monday", "Tuestday", "Wednesday", "Thursday"};
	
	// initialize all the monkeys
	for (int i = 0; i < 3; i++)
	{ 
		for (int z = 0; z < 5; z++)
		{
			cout << "Name of the monkey: ";
			cin >> monkeyEating[i][0];
			cout << "how much food did " << monkeyEating[z][0] << " eat on " << days[i] << ":" ;
			cin >> monkeyEating[i][z];
		}
	}
	createReport(days,monkeyEating, monkeys, weekdays);
}

void createReport(string day[], int arr[][5], int monkeyLim, int weekdayLim)
{
	int totalFood;
	for (int i = 0; i < monkeyLim; i++) 
	{
		for (int z = 0; z < weekdayLim; z++)
		{
			totalFood += arr[i][z];
		}
	}
	totalFood /= 5;
	cout << totalFood;
}