#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	string word;
	cout << "Enter a string for morse code: ";
	getline(cin, word);
	char letter;
	int holder = word.length() + 1;
	
	for (int i = 0; i < holder ; i++)
	{
		if ( isalpha(word.at(i)) ) 
		{
			letter = toupper(word.at(i));
			switch ( letter)
			{
				case 'A':
					word.replace(i,1, ".-");
					break;
				case 'B':
					word.replace(i,1, "-...");
					break;
				case 'C':
					word.replace(i,1, "-.-.");
					break;
				case 'D':
					word.replace(i,1, "-..");
					break;
				case 'E':
					word.replace(i,1, ".");
					break;
				case 'F':
					word.replace(i,1, "..-.");
					break;
				case 'G':
					word.replace(i,1, "--.");
					break;
				case 'H':
					word.replace(i,1, "....");
					break;
				case 'I':
					word.replace(i,1, "..");
					break;
				case 'J':
					word.replace(i,1, ".---");
					break;
				case 'K':
					word.replace(i,1, "-.-");
					break;
				case 'L':
					word.replace(i,1, ".-..");
					break;
				case 'M':
					word.replace(i,1, "--");
					break;
				case 'N':
					word.replace(i,1, "-.");
					break;
				case 'O':
					word.replace(i,1, "---");
					break;
				case 'P':
					word.replace(i,1, ".--.");
					break;
				case 'Q':
					word.replace(i,1, "--.-");
					break;
				case 'R':
					word.replace(i,1, ".-.");
					break;
				case 'S':
					word.replace(i,1, "...");
					break;
				case 'T':
					word.replace(i,1, "-");
					break;
				case 'U':
					word.replace(i,1, "..-");
					break;
				case 'V':
					word.replace(i,1, "...-");
					break;
				case 'W':
					word.replace(i,1, ".--");
					break;
				case 'X': 
					word.replace(i,1, "-..-");
					break;
				case 'Y':
					word.replace(i,1, "-.--");
					break;
				case 'Z': 
					word.replace(i,1, "--..");
					break;
				default:
					continue;
			}
		} else  {
			switch (word.at(i))
			{
				case ' ':
					word.replace(i,1, " ");
					break;
				case ',':
					word.replace(i,1, "--..--");
					break;
				case '.':
					word.replace(i,1, ".-.-.-");
					break;
				case '?':
					word.replace(i,1, "..--..");
					break;
				case '0':
					word.replace(i,1, "-----");
					break;
				case '1':
					word.replace(i,1, ".----");
					break;
				case '2':
					word.replace(i,1, "..---");
					break;
				case '3':
					word.replace(i,1, "...--");
					break;
				case '4':
					word.replace(i,1, "....-");
					break;
				case '5':
					word.replace(i,1, ".....");
					break;
				case '6':
					word.replace(i,1, "-....");
					break;
				case '7':
					word.replace(i,1, "--...");
					break;
				case '8':
					word.replace(i,1, "---..");
				case '9':
					word.replace(i,1, "----.");
					break;
				default:
					continue;
			}
		}
		
	}cout << word;
	
}