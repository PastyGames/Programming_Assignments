	#include <iostream>
	#include <iomanip>
	#include <string>
	#include <cstring>
	#include <cctype>
	using namespace std;

	char *capitalize(char *sentence);

	int main()
	{
		const int size = 500;
		char usersentence[size];	//user inputed text/sentences

		cout << "Input a string to modify: ";
		cin.getline(usersentence, size);

		cout << "\nYour modified string is below.\n\n";

		cout << capitalize(usersentence);

		cout << endl << endl;
		system("pause");
	}

	//fnc to capitalize each sentence
	char *capitalize(char *sentence)
	{
		int length = strlen(sentence);		//used to get the length of user string

		int i, j;	//integers for the for-loop. Will use both to decide char to capitalize

		sentence[0] = toupper(sentence[0]);	//capitalize the first letter

		for (i = 0; i < length; i++)		//used to search the string
		{
			j = i;

			if (sentence[i] == '.' || sentence[i] == '?' || sentence[i] == '!')		//to search for punctuation
			{
				j++;
				j++;
				sentence[j] = toupper(sentence[j]);
				
				if (sentence[j] == ' ')		//for doulble spaced sentences
				{
					j++;
					sentence[j] = toupper(sentence[j]);
				}
			}
		}

		return sentence;
	}