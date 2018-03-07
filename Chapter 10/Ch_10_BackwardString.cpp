#include <iostream>

using namespace std;

// function prototype
void backwards(char *);

int main(int argc, char *argv[]) 
{
	const int NUM_CHARS = 20;
	char word [NUM_CHARS];
	
	cout << "Enter a string up to 20 characters long" << endl;
	cin.getline(word, NUM_CHARS);
	
	backwards(word);
}

void backwards(char * cptr)
{
	int length = strlen(cptr);
	char t;
	for (int i = (length - 1), z = 0; i > length / 2; i--, z++)
	{
		t = cptr[i];
		cptr[i] = cptr[z];
		cptr[z] = t;
		
	}
	for (int k = 0; k < length; k++) 
	{
		cout << cptr[k];
	}
		
	
}