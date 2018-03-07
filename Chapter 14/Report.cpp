#include "TIMEOFF.H"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) 
{
	TimeOff worker("Demauri", "00470948");
	int months;
	double daysWorked;
	cout << "Enter the number of months you have worked at your job: ";
	cin >> months;
	for (int i = 0; i < months; i++)
	{
		worker.setVacTaken(worker.getVacTaken() + 12);
		worker.setSickTaken(worker.getSickTaken() + 8);
	}
	
	cout << "The amount of vacation available is: " << worker.getVacTaken() << " hours"  << endl;
	cout << "The amount of sick leave: " << worker.getSickTaken() << " hours" << endl;
}