#include <iostream>
#include <iomanip>

using namespace std;

struct division
{
	string divisionName;
	double firstQuarter;
	double secondQuarter;
	double thirdQuarter;
	double fourthQuarter;
	double totalSales;
	double avgQuarterly;
};

void calculate(division);

int main(int argc, char *argv[]) 
{
	division East = {"East"};
	division West = {"West"};
	division North = {"North"};
	division South = {"South"};
	
	calculate(East);
	calculate(West);
	calculate(North);
	calculate(South);
}

void calculate(division area)
{

	cout << "Enter the 1st Quarter Sales: ";
	cin >> area.firstQuarter;
	if (area.firstQuarter < 0)
	{
		cout << "Can't have negative sale figures: ";
		cin >> area.firstQuarter;
	}
	
	cout << "Enter the 2nd Quarter Sales: ";
	cin >> area.secondQuarter;
	if (area.secondQuarter < 0)
	{
		cout << "Can't have negative sale figures: ";
		cin >> area.secondQuarter;
	}
	
	cout << "Enter the 3rd Quarter Sales: ";
	cin >> area.thirdQuarter;
	if (area.thirdQuarter < 0)
	{
		cout << "Can't have negative sale figures: ";
		cin >> area.thirdQuarter;
	}
	
	cout << "Enter the 4th Quarter Sales: ";
	cin >> area.fourthQuarter;
	if (area.fourthQuarter < 0)
	{
		cout << "Can't have negative sale figures: ";
		cin >> area.fourthQuarter;
	}
	
	area.totalSales = (area.firstQuarter + area.secondQuarter + area.thirdQuarter + area.fourthQuarter);
	area.avgQuarterly = (area.totalSales) / 4;
	
	cout << "\t\t\t" << area.divisionName << endl;
	cout << "Total sales is: " << area.totalSales << endl;
	cout << "Average quarterly sales: " << area.avgQuarterly << endl;


}