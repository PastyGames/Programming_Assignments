#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char *argv[]) 
{
	ifstream file;
	string input;
	string line;
	int numOfLines = 0;
	string fileName;
	char c = '\0';
	int length;
	int counter = 0;
	cout << "Enter the file name: ";
	cin >> fileName;
	file.open(fileName, ios::in);
	
	while (getline(file, line)) 
	{
		++numOfLines;
		
	}
	if (numOfLines > 10) 
	{
			file.close();
			file.open(fileName, ios_base::ate);
			int counter = 0;
			
			if (file) 
			{
				length = file.tellg();
				
				for (int i = length - 2; i> 0; i--)
				{
					file.seekg(i);
					c = file.get();
					if (c == '\r' || c == '\n') 
						++counter;
						if (counter == 10)
							break;
							
						
						
				}
				getline(file, input);
				while (file) 
				{
					cout << input << endl;
					getline(file,input);
				}
			
			}
	} else  {
		
		file.close();
		file.open(fileName, ios::in);
		
		if (file) 
		{
			getline(file, input);
		
			while (file)
			{
			cout << input << endl;
			getline(file, input);
			}
		} else  
			cout << "fking error";
	file.close();
}
}
