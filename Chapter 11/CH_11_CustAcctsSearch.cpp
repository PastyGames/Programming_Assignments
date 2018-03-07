#include <iostream>

using namespace std;
// statiics
static int numAccount = 0;
int hold;
// structures
struct Account {
	string name;
	string address;
	string cityStateZip;
	string telephone;
	int balance;
	string lastPayment;
};
// prototypes
void display(Account []);
void initialize(Account []);
void searchAccounts(Account []);
void searched(Account [], int);

int main(int argc, char *argv[]) 
{
	const int amount = 10;
	Account accounts[amount];
	display(accounts);
//	intialize(accounts);
}

void initialize(Account acc[])
{
	for (int i = numAccount; i < numAccount + 1; i++)
	{
		cout << endl;
		cout << "Name: ";
		cin >> acc[i].name;
		cin.ignore();
		cout << "Street Address: ";
		getline(cin, acc[i].address);
		cout << "City, State, Zip: ";
		getline(cin,acc[i].cityStateZip);
		cout << "Telephone xxx-xxx-xxxx: ";
		cin >> acc[i].telephone;
		cout << "Account balance: ";
		cin >> acc[i].balance;
		while (acc[i].balance < 0)
		{
			cout << "Invalid balance entered, must be positive, try again: ";
			cin >> acc[i].balance;
		}
		cout << "Date of last payment mm/dd/yyyy: ";
		cin >> acc[i].lastPayment;
		cout << endl;
	}
	numAccount++;
}

void display(Account acc [])
{
	int choice;
	const int QUIT = -1;
	cout << endl;
	cout << "\t\tAccount Creation" << endl;
	cout << "Enter 1: To create new account" << endl;
	cout << "Enter 2: To change an element in the account" << endl;
	cout << "Enter 3: To display contents of account" << endl;
	cout << "Enter 4: Search for accounts" << endl;
	cout << "Enter -1: To quit the program" << endl;
	cout << "Your choice: ";
	cin >> choice;
	
	switch (choice)
	{
		case 1: 
			initialize(acc);
			display(acc);
			break;
		case 2:
			int option;
			cout << endl;
			cout << "\t\tChanging Options" << endl;
			cout << "Enter 1: To change name" << endl;
			cout << "Enter 2: To change address" << endl;
			cout << "Enter 3: To change City, State, Zip" << endl;
			cout << "Enter 4: To change telephone" << endl;
			cout << "Enter 5: To change account balance" << endl;
			cout << "Enter 6: To change date of last payment" << endl;
			cout << "Enter 7: To go back" << endl;
			cout << "Which element do you want to change: ";
			cin >> option;
			
			switch (option)
			{
				case 1:
					cout << "Enter change to name: ";
					cin >> acc[numAccount - 1].name;
					display(acc);
					break;
				case 2:
					cout << "Enter change to address: ";
					cin >> acc[numAccount - 1].address;
					display(acc);
					break;
				case 3:
					cout << "Enter change to City, State, Zip: ";
					cin >> acc[numAccount - 1].cityStateZip;
					display(acc);
					break;
				case 4:
					cout << "Enter change to telephone: ";
					cin >> acc[numAccount - 1].telephone;
					display(acc);
					break;
				case 5: 
					cout << "Enter change to account balance: ";
					cin >> acc[numAccount - 1].balance;
					while (acc[numAccount - 1].balance < 0)
					{
						cout << "Invalid balance entered, must be positive, try again: ";
						cin >> acc[numAccount - 1].balance;
					}
					display(acc);
					break;
				case 6:
					cout << "Enter change to date of last payment: ";
					cin >> acc[numAccount - 1].lastPayment;
					display(acc);
					break;
				case 7:
					display(acc);
					break;
				default:
					break;
				
			}
			break;
		case 3:
			hold = numAccount - 1;
			searched(acc, hold);
			display(acc);
			break;
		case 4:
			searchAccounts(acc);
			display(acc);
			break;
		case -1:
			cout << "Program has ended" << endl;
			exit(0);
		default:
			break;
	}
}
void searchAccounts(Account acc [])
{
	string names;
	cout << "Enter the first 3 letters of the name you are looking for: ";
	cin >> names;
	for (int i = 0; i < numAccount; i++)
	{
		if (acc[i].name.compare(0, 3, names) == 0)
		{
			searched(acc, i);
		}
	}
	display(acc);
}
void searched(Account acc [], int num)
{
	cout << endl;
	cout << endl;
	cout << "\t\tYour Account Details" << endl;
	cout << "Name: " << acc[num].name << endl;
	cout << "Address: " << acc[num].address << endl;
	cout << "City, State, Zip: " << acc[num].cityStateZip << endl;
	cout << "Telephone: " << acc[num].telephone << endl;
	cout << "Account Balance: $" << acc[num].balance << endl;
	cout << "Date of last payment: " << acc[num].lastPayment << endl;
	cout << endl;
	cout << endl;
	

}