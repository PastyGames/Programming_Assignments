// THis program is carefully constructed to use the "Fall through" feature of the switch statement
#include <iostream>

using namespace std;

int main() 
{
	int modelNum; 		// model number
	
	// Get a model number from a user.
	cout << "Our TVs come in three models:\n";
	cout << "The 100, 200, and 300. Which do you want? ";
	cin >> modelNum;
	
	// Display the model's feature 
	cout << "That model has the following features:\n";
	switch (modelNum)
	{
		case 300 : cout << "\tPicture-in-a-picture.\n";
		case 200 : cout << "\tStereo sound.\n";
		case 100 : cout << "\tRemote control.\n";
					break;
		default : cout << "You can only chose the 100, 200, or 300.\n";
		
	}
	return 0;
}