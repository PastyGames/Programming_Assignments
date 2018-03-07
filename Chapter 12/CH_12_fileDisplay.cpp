// Use testingTheInput.txt to see the program work.
// created by demauri portis
// file display program
// 11/1/2015

#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char *argv[]) 
{
	ifstream file;
	string fileName;
	string input;
	int count = 0;
	cout << "Whats the filename: ";
	cin >> fileName; 
	file.open(fileName, ios::in);
	if (file) 
	{
		getline(file, input);
		
 		while (file)
		{
			cout << input << endl;
			
			getline(file, input);
			
			count++;
			if (count % 24 == 0) 
			{
				cin.ignore();
				cin.get();
			}
		}
		
		file.close();
	}
}