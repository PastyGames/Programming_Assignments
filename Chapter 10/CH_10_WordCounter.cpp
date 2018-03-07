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
	int holder = wordCounter(word);
	cout << "The amount of words is: " << holder;
}

int wordCounter(char * cptr)
{
	int count = 0;
	char ch = 32;
	int letters = 0;
	double avg;
	
	while (*cptr != '\0')
	{
		if (*cptr == ch)
			count++;
		cptr++;
		letters++;
		
	}
	count++; // add one more for when the newline is encountered.
	avg = ( (double)(letters - (count - 1) ) / count );
	cout << "The average amount of letters per word is: " << avg << endl;
	return count;
}