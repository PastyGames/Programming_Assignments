#include "DIVSALES.H"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) 
{
	DivSales divisions[6];
	int sales1, sales2, sales3, sales4;
	
	for(int i = 0; i < 6; i++)
	{
		cout << "Enter quarter 1 sales fig: ";
		cin >> sales1;
		cout << "Enter quarter 2 sales fig: ";
		cin >> sales2;
		cout << "Enter quarter 3 sales fig: ";
		cin >> sales3;
		cout << "Enter quarter 4 sales fig: ";
		cin >> sales4;
		divisions[i].setQuarters(sales1, sales2, sales3, sales4);
	}
	int i = 0;
	for (int k = 0; k < 4; k++)
	{
		
		cout << "\t\tDivision " << (i + 1) << " sales" << endl;
		cout << "Quarter " << (i + 1) << ": " << divisions[k].getSubscript(k) << endl;
		cout << "Quarter " << (i + 2) << ": " << divisions[k].getSubscript(k) << endl;
		cout << "Quarter " << (i + 3) << ": " << divisions[k].getSubscript(k) << endl;
		cout << "Quarter " << (i + 4) << ": " << divisions[k].getSubscript(k) << endl;
		cout << "Enter a key to continue" << endl;
		if(k == 0)
			cin.ignore();
		cin.get();
		i++;
		 
	}
	for (int j = 0; j < 6; j++)
	{
		cout << "Division " << (j + 1) << " sales: " << divisions[j].getTotal() << endl;
		cout << "Enter a key to continue" << endl;
		cin.get();
	}
}