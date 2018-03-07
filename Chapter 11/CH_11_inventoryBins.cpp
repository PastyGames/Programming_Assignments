#include <iostream>
#include <iomanip>

using namespace std;

struct Bin {
	string description;
	int numOfParts;
};
void addParts(Bin *, int, int);
void removeParts(Bin *, int, int);
void display(Bin[]);
int main(int argc, char *argv[]) 
{
	Bin bins[] = { {"Valve", 10}, {"Bearing", 5}, {"Bushing", 15}, {"Coupling", 21}, {"Flange", 7},
					{"Gear", 5}, {"Gear Housing", 5}, {"Vacuum Gripper", 25}, {"Cable", 18}, {"Rod", 12}};
	Bin * ptr = nullptr;
	ptr = bins;	
	int num;
	const char QUIT = 'Z';
	char choice;
	int amount;
	do {
		display(bins);
		cout << "Enter your choice of bin to edit or 999 to quit: ";
		cin >> num;
		if (num == 999) 
			exit(0);
		cout << "Enter A to add parts or R to remove parts or Z to quit: ";
		cin >> choice;
		if (choice == QUIT)
			exit(0);
		if (toupper(choice) == 'R')
		{
			cout << "Enter the amount you want to remove: ";
			cin >> amount;
			removeParts(bins, num, amount);
		}
		else if (toupper(choice) == 'A') 
		{
			cout << "Enter the amount you want to add: ";
			cin >> amount;
			addParts(bins, num, amount);
		}
		
		
	} while (true);			
}

void addParts(Bin * bptr, int binNum, int add)
{
	bptr[binNum - 1].numOfParts += add;
	
	while (bptr[binNum - 1].numOfParts > 30) 
	{
		cout << "The maximum number of parts is 30." << endl;
		cout << "There is currently " << bptr[binNum - 1].numOfParts - add << " parts in this bin." << endl;
		bptr[binNum - 1].numOfParts -= add;
		cout << "How many did you want to add now? ";
		cin >> add;
		bptr[binNum - 1].numOfParts += add;
		
	}
}
void removeParts(Bin * bptr, int binNum, int remove)
{
	bptr[binNum - 1].numOfParts -= remove;
	while (bptr[binNum - 1].numOfParts < 0)
	{
		cout << "You cant remove parts we don't possess" << endl;
		cout << "There is currently " << bptr[binNum - 1].numOfParts + remove << " parts remanining in this bin." << endl;
		bptr[binNum - 1].numOfParts += remove;
		cout << "How many did you want to remove now? ";
		cin >> remove;
		bptr[binNum - 1].numOfParts -= remove;
	}
}
void display(Bin contents[])
{
	cout << "--- Contents of each bin ---" << endl;

	cout << "1." << setw(23) << left << contents[0].description << " " << contents[0].numOfParts << endl;
	cout << "2." << setw(24) << contents[1].description << contents[1].numOfParts << endl;
	cout << "3." << setw(24) << contents[2].description << contents[2].numOfParts << endl;
	cout << "4." << setw(24) << contents[3].description << contents[3].numOfParts << endl;
	cout << "5." << setw(24) << contents[4].description << contents[4].numOfParts << endl;
	cout << "6." << setw(24) << contents[5].description << contents[5].numOfParts << endl;
	cout << "7." << setw(24) << contents[6].description << contents[6].numOfParts << endl;
	cout << "8." << setw(24) << contents[7].description << contents[7].numOfParts << endl;
	cout << "9." << setw(24) << contents[8].description << contents[8].numOfParts << endl;
	cout << "10."<< setw(23) << contents[9].description << contents[9].numOfParts << endl;
}
