#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) 
{
	const int NUM_CHARS = 75;
	char sentence[NUM_CHARS];
	int index = 0;
	string word;
	
	
	
	cout << "Enter a sentence with all words together, but each setence first word is capitalized: ";
	cin.getline(sentence, NUM_CHARS);
	
	word.append(sentence);

	char letter;
	bool skipFirst = false;
	int time = 0;
	while (sentence[index] != '\0')
	{
		letter = toupper(sentence[index]);
	
		if ( sentence[index] == letter && skipFirst == true)  
		{
			if (time == 0) 
				word.insert(index," ");
			else  if(time > 1)
				word.insert(index + 2, " ");
			else  
				word.insert(index + 1, " ");
			time++;
		}
		skipFirst = true;
		index++;
		
	}
	cout << word;

}