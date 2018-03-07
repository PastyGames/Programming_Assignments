#include <iostream>

using namespace std;

// Function prototypes
char * getString();
int displayMenu(char *);
int countVowels(char *);
int countConsonants(char *);


int main(int argc, char *argv[]) 
{
	char * ptr = nullptr;
	ptr = getString();
	displayMenu(ptr);
	char answer;
	cout << "DID YOU WANT TO DO SOMETHING ELSE? ";
	cin >> answer;
	while (toupper(answer) == 'Y')
	{
		displayMenu(ptr);
		cout << "AGAIN? ";
		cin >> answer;
	}
}

char * getString()
{
	const int NUM_CHAR = 50;
	char word [NUM_CHAR];
	char * ptr = nullptr;
	cout << "Enter a string to be anaylzed: ";
	cin.getline(word, NUM_CHAR);
	ptr = new char[NUM_CHAR];	
	for (int i = 0; i < strlen(word); i++)
	{
		ptr[i] = word[i];
	}
	return ptr;
	
}

int displayMenu(char * cptr)
{
	char choice;
	cout << "\t\t\tMenu Options" << endl;
	cout << "A) Count the number of vowels in the string" << endl;
	cout << "B) Count the number of consonants in the string" << endl;
	cout << "C) Count both the vowels and consonants in the string" << endl;
	cout << "D) Enter another string" << endl;
	cout << "E) Exit the program" << endl;
	cout << "ENTER YOUR CHOICE: ";
	cin >> choice;
	while (toupper(choice) > 69 || toupper(choice) < 65)
	{
		cout << "Invalid selection was made, try again";
		cin >> choice;
	}
	
	int amount;
	char * newptr = nullptr;
		switch (toupper(choice))
		{
			case 'A': 
				amount = countVowels(cptr);
				cout << "The amount of vowels is: " << amount << endl;
				break;
			case 'B':
				amount = countConsonants(cptr);
				cout << "The amount of consonants is: " << amount << endl;
				break;
			case 'C': 
				amount = countConsonants(cptr) + countVowels(cptr);
				cout << "The total amount of consannts and vowels is: " << amount << endl;
				break;
			case 'D':
				cin.ignore();
				newptr = getString();
				displayMenu(newptr);
				break;
			case 'E':
				cout << "Program has ended";
				exit(0);
				
		}
	
	return amount;
}
// a, e, i, o, u
int countVowels(char * cptr)
{
	int length = strlen(cptr);
	int numOfVowels = 0;
	
	for (int i = 0; i < length; i++)
	{
		if (toupper(cptr[i]) == 65 || toupper(cptr[i]) ==  69
		 || toupper(cptr[i]) == 73 || toupper(cptr[i]) == 79 || toupper(cptr[i]) == 85)
		 {
			++numOfVowels;
		}
	}
	return numOfVowels;
}

int countConsonants(char * cptr)
{
	int length = strlen(cptr);
	int numOfConsonants = 0;
	
	for (int i = 0; i < length; i++)
	{
		if (toupper(cptr[i]) != 32 && toupper(cptr[i]) != 33 && toupper(cptr[i]) != 63 
		&& toupper(cptr[i]) != 46 && toupper(cptr[i]) != 65 && toupper(cptr[i]) != 69 
		&& toupper(cptr[i]) != 73 && toupper(cptr[i]) != 79 && toupper(cptr[i]) != 85)
		{
			numOfConsonants++;
		}
	}
	return numOfConsonants;
}