#include "Employee.h"
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	Employee account("Susan Meyers", 47899, "Accounting", "Vice President");
	Employee it("Mark Jones", 38119, "IT", "Programmer");
	Employee manu("Joy Rogers", 81774, "Manufacturing", "Engineer");
	
	cout << "\t\t" << account.getName() << endl;
	cout << "Id Number: " << account.getId() << endl;
	cout << "Department: " << account.getDepartment() << endl;
	cout << "Position: " << account.getPosition() << endl;
	
	cout << "\t\t" << it.getName() << endl;
	cout << "Id Number: " << it.getId() << endl;
	cout << "Department: " << it.getDepartment() << endl;
	cout << "Position: " << it.getPosition() << endl;
	
	cout << "\t\t" << manu.getName() << endl;
	cout << "Id Number: " << manu.getId() << endl;
	cout << "Department: " << manu.getDepartment() << endl;
	cout << "Position: " << manu.getPosition() << endl;
}