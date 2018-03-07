#include <iostream>
#include <cctype>

using namespace std;

// prototypes
bool sixChars(char *);
bool casing(char *);
bool digit(char *);

int main(int argc, char *argv[]) 
{
	const int NUM_CHARS = 25;
	char password[NUM_CHARS];
	
	cout << "Enter your password: ";
	cin.getline(password,NUM_CHARS);
	if (sixChars(password) == false)
		cout << "The password needs to be at least six characters long.";
	else if (casing(password) == false)
		cout << "The password needs to contain at least one uppercase and one lowercase";
	else if (digit(password) == false)
		cout << "The password should have at least one digit";
	else  
		cout << "You are now logged in";
}

bool sixChars(char * pw)
{
	if (strlen(pw) < 6)
		return false;
	else  
		return true;
}

bool casing(char * pw)
{
	int upper = 0;
	int lower = 0;
	int index = 0;
	while (pw[index] != '\0')
	{
		if ( isupper(pw[index]) ) 
			upper++;
		else  
			lower++;
		index++;
	}
	if (upper >= 1 && lower >= 1)
		return true;
	else  
		return false;
}
bool digit(char * pw)
{
	int index = 0;
	int num = 0;
	while (pw[index] != '\0')
	{
		if (isdigit(pw[index]))
			num++;
		index++;
	}
	if (num >= 1)
		return true;
	else  
		return false;
}