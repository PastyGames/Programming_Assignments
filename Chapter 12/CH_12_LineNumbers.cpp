#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char *argv[]) 
{
	ifstream file;
	string fileName;
	int numOfLines = 1;
	string line;
	cout << "Enter the filename: ";
	cin >> fileName;
	file.open(fileName, ios::in);
	
	if (file) 
	{
		getline(file, line);
		
		while (file)
		{
			cout << numOfLines << ": " << line << endl;
			numOfLines++;
			if (numOfLines % 24 == 0)
			{
				cin.ignore();
				cin.get();
			}
			getline(file, line);
			
		}
	}
}