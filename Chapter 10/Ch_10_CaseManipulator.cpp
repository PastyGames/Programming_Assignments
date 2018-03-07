#include <iostream>

using namespace std;
// prototype
void upper(char *);		// step thru the string converting to uppercase
void lower(char *);		// step thru the string converting to lowercase
void reverse(char *);	// determine whether if the char is lowercase or uppercase if so convert to opp

int main(int argc, char *argv[]) 
{
	const int NUM_CHARS = 50;
	char word [NUM_CHARS];
	cout << "Enter a phrase: ";
	cin.getline(word, NUM_CHARS);
	
	reverse(word);
	lower(word);
	upper(word);
}
 void reverse(char * arr)
{
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == toupper(arr[i])) 
			arr[i] = tolower(arr[i]);	
		else
			arr[i] = toupper(arr[i]);
	}
	cout << "The reverse version: " << arr << endl;
	
	
}
void upper(char * arr) 
{
	for (int i = 0; i < strlen(arr); i++)
		arr[i] = toupper(arr[i]);
		cout << "The uppercase version: " << arr << endl;
}
void lower(char * arr)
{
	for (int i = 0; i < strlen(arr); i++)
		arr[i] = tolower(arr[i]);
		cout << "The lower case version: " << arr << endl;
}