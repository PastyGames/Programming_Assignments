#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) 
{
	ifstream file;
	int lines = 0;
	string filename;
	string search;
	string input;
	cout << "What is the files name: ";
	cin >> filename;
	cout << "Enter a string to search for: ";
	cin >> search;
	
	file.open(filename, ios::in);
	
	if (file) 
	{
		
		while (getline(file, input) ) 
		{
			lines++;
			if (input.find(search, 0) != string::npos) 
			{
				cout << input << endl;
				cout << "The string was at line " << lines << endl;
			}
		}
	}
	

}