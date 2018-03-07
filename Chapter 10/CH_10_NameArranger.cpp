#include <iostream>

using namespace std;

int main(int argc, char *argv[]) 
{
	const int NUM_CHARS = 15;
	const int FULL = 50;
	char firstName[NUM_CHARS];
	char middleName[NUM_CHARS];
	char lastName[NUM_CHARS];
	char fullName[] = {""};
	
	cout << "Enter your first name: ";
	cin.getline(firstName, NUM_CHARS);
	cout << "Enter your middle name: ";
	cin.getline(middleName, NUM_CHARS);
	cout << "Enter your last name: ";
	cin.getline(lastName, NUM_CHARS);
	
	strcat(fullName, lastName);
	strcat(fullName, ", ");
	strcat(fullName, firstName);
	strcat(fullName, " ");
	strcat(fullName, middleName);
	cout << fullName;
}