#include <iostream>
#include <fstream>

using namespace std;

struct Corporate {
	string division;
	double quarter1, quarter2, quarter3, quarter4;
	double sales;
};

int main(int argc, char *argv[]) 
{
	Corporate divisions[4];
	
	fstream file;
	double quarterCorp = 0.0, divisionYear = 0.0, yearCorp = 0.0;
	double avgQuarter, highest, lowerst;
	
	
	file.open("Divisions.dat", ios::in | ios::binary);
	
	if (!file)
	{
		cout << "Error trying to open the file." << endl;
		return 0;
	}
	
	cout << "Here are the divisions in the file: " << endl;
	file.read( reinterpret_cast<char *>(divisions), sizeof(divisions) );
	cout << divisions[0].division << endl;
	cout << divisions[1].division;
	

	
	
	
	
	
	
}