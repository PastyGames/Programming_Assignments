#include <iostream>
#include <fstream>

using namespace std;
const int QUARTERSIZE = 4;
struct Corporate {
	string division;
	double quarter1, quarter2, quarter3, quarter4;
	double sales;
};
int main(int argc, char *argv[]) 
{
	Corporate East = {"East"};
	Corporate West = {"West"};
	Corporate North = {"North"};
	Corporate South = {"South"};
	fstream file;
	file.open("Divisions.dat", ios::out | ios::binary);
	
	
	cout << "\t\t" << East.division << " Division" << endl;
	cout << "Enter sales for quarter 1: ";
	cin >> East.quarter1;
	cout << "Enter sales for quarter 2: ";
	cin >> East.quarter2;
	cout << "Enter sales for quarter 3: ";
	cin >> East.quarter3;
	cout << "Enter sales for quarter 4: ";	
	cin >> East.quarter4;
	East.sales = East.quarter1 + East.quarter2 + East.quarter3 + East.quarter4;
	
	file.write(reinterpret_cast<char *>(&East), sizeof(East));
	
	
	cout << "\t\t" << West.division << " Division" << endl;
	cout << "Enter sales for quarter 1: ";
	cin >> West.quarter1;
	cout << "Enter sales for quarter 2: ";
	cin >> West.quarter2;
	cout << "Enter sales for quarter 3: ";
	cin >> West.quarter3;
	cout << "Enter sales for quarter 4: ";	
	cin >> West.quarter4;
	West.sales = West.quarter1 + West.quarter2 + West.quarter3 + West.quarter4;
	
	file.write(reinterpret_cast<char *>(&West), sizeof(West));
	
	cout << "\t\t" << North.division << " Division" << endl;
	cout << "Enter sales for quarter 1: ";
	cin >> North.quarter1;
	cout << "Enter sales for quarter 2: ";
	cin >> North.quarter2;
	cout << "Enter sales for quarter 3: ";
	cin >> North.quarter3;
	cout << "Enter sales for quarter 4: ";	
	cin >> North.quarter4;
	North.sales = North.quarter1 + North.quarter2 + North.quarter3 + North.quarter4;
	
	file.write(reinterpret_cast<char *>(&North), sizeof(North));
	
	
	
	cout << "\t\t" << South.division << " Division" << endl;
	cout << "Enter sales for quarter 1: ";
	cin >> South.quarter1;
	cout << "Enter sales for quarter 2: ";
	cin >> South.quarter2;
	cout << "Enter sales for quarter 3: ";
	cin >> South.quarter3;
	cout << "Enter sales for quarter 4: ";	
	cin >> South.quarter4;
	South.sales = South.quarter1 + South.quarter2 + South.quarter3 + South.quarter4;
	
	file.write(reinterpret_cast<char *>(&South), sizeof(South));
	file.close();






}