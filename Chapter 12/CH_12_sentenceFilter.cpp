#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char *argv[]) 
{
	ifstream ifile;
	ofstream ofile;
	string filename;
	char ch;
	int charNum = 0;
	
	cout << "Enter the filename: ";
	cin >> filename;
	ofile.open(filename, ios::out);
	
	cout << "Enter the other file name: ";
	cin >> filename;
	ifile.open(filename, ios::in);

	
	
	if (ifile)
	{
		ifile.get(ch);
		charNum++;
		while (ifile)
		{
			
			if (charNum == 1)
			{
				ofile.put(toupper(ch));
				charNum++;
				ifile.get(ch);
			}
			else if (ch == '.')
			{
				ofile.put(ch);
				
				ifile.get(ch);
				ofile.put(ch);
				charNum = 1;
				
				ifile.get(ch);
			}
			else {
				ofile.put(tolower(ch));
				ifile.get(ch);
			}
		}
		ifile.close();
		ofile.close();
	}
	else  
		cout << "Cannot open " << filename << endl;
}