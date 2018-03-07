#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) 
{
	fstream file;
	string input;
	string fileName;
	cout << "Enter the filename: ";
	cin >> fileName;
	file.open(fileName, ios::in);
	if (file)
	{
		getline(file, input);
		
		while (file)
		{
			cout << input << endl;
			
			getline(file,input);
		}
		file.close();
	}
	else  
		cout << "Error happened opening the file";
}