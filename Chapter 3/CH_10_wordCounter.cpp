#include <iostream>
#include <cctype>

using namespace std;
int wordCounter(char *);

int main(int argc, char *argv[]) 
{
	const int NUM_CHAR = 50;
	char word [NUM_CHAR];
	cout << "Enter a sentence to see how many words it contains" << endl;
	cin.getline(word, NUM_CHAR);
	int number = strlen(word);
	cout << wordCounter(word);
}

int wordCounter(char * cptr)
{
	int count = 0;
	char ch = 32;
	
	while (*cptr != '\0')
	{
		if (*cptr == ch)
			count++;
		cptr++;
		
	}
	count++; // add one more for when the newline is encountered.
	return count;
}