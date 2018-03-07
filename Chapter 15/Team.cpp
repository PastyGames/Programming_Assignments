#include <iostream>
#include "TeamLeader.h"
#include "ProductionWOrker.h"
#include <string>

using namespace std;

int main(int argc, char *argv[]) 
{
	string word;
	int temp;
	TeamLeader leader(250, 25, 10, 1, 15);
	
	cout << "Name of the the team leader: ";
	cin >> word;
	leader.setName(word);
	cout << "Employee Number: ";
	cin >> temp;
	leader.setEmp(temp);
	cout << "Hire Date: ";
	cin >> word;
	leader.setName(word);
	
	while (temp != 999) 
	{
		cin.ignore();
		// Title
		cout << "\t\tInformation of the Team Leader" << endl;
		// Menu
		cout << "1. Get name of the employee" << endl;
		cout << "2. Get the shift of the employee" << endl;
		cout << "3. Get the hire date of the employee" << endl;
		cout << "4. Get the employee number " << endl;
		cout << "5. Get the pay rate of the employee" << endl;
		cout << "6. Get the monthly bonus" << endl;
		cout << "7. Get the required training hours" << endl;
		cout << "8. Get the training attended" << endl;
		cin >> temp;
		
		
		switch (temp) 
		{
			case 1:
				// Name
				cout << "Name: " << leader.getName() << endl;
				break;
			case 2:
				// Shift
				if (leader.getShift() == 1)
					cout << "Shift: Night" << endl;
				else 
					cout << "Shift: Morning" << endl;
				break;
			case 3:
				// Hire Date	
				cout << "Hire Date: ";
				word = leader.getHire();
				char arr[8];
				for (int i = 0; i < 8; i++)
				{
					if(i == 2 || i == 5)
						arr[i] = '/';
					else 
						arr[i] = word[i];
					cout << arr[i];
				}	
				break;
			case 4:
				// Employe Number
				cout << "Employee Number: " << leader.getEmp() << endl;
				break;
			case 5:
				// Current PayRate
				cout << "Pay Rate: " << leader.getPay() << endl;
				break;
			case 6:
				// Monthly Bonus
				cout << "Monthly Bonus: " << leader.getMonth() << endl;
				break;
			case 7: 
				// Required Training 
				cout << "Required Training hours: " << leader.getReqTrain() << endl;
				break;
			case 8:
				// Current Training hours
				cout << "Training hours attended: " << leader.getTrained() << endl;
				break;
		}
	}
	
		
	
	
	
		
		
	
	
	
	
	
	
	
	
}