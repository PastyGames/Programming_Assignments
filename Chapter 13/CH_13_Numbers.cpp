#include "FLOATERS.H"
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) 
{
	Numbers num(10);
	num.store(0,3.45);
	num.store(1, 3.44);
	cout << setprecision(3);
	cout << "The retrieved: " << num.retrieve(0) << endl;
	cout << "The highest: " << num.highest() << endl;
	cout << "The lowest: " << num.lowest() << endl;
	cout << "The average: " << num.average() << endl;
	
}