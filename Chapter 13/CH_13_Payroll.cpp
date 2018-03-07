#include "PAYROLL.H"
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	const int NUMS = 5;
	double hour[NUMS];
	int worked[NUMS];
	for (int i = 0; i < NUMS; i++) 
	{
		cout << "Enter the hourly rate: ";
		cin >> hour[i];
		cout << "Enter the hours worked: ";
		cin >> worked[i];
	}
	Payroll pays[NUMS] = { Payroll(hour[0], worked[0]), Payroll(hour[1], worked[1]),
							Payroll(hour[2], worked[2]), Payroll(hour[3], worked[3]),
							Payroll(hour[4], worked[4])};
	

}