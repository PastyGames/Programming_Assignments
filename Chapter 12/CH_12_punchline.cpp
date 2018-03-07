#include <iostream>
#include <fstream>

using namespace std;
void getJoke(ifstream &);
void getPunchline(ifstream &);
int main(int argc, char *argv[]) 
{
	ifstream joke, punchline;
	joke.open("joke.txt", ios::in);
	punchline.open("testingTheInput.txt",ios_base::ate);
	getJoke(joke);
	getPunchline(punchline);
	
}

void getJoke(ifstream &file)
{
	string input;
	if (file)
	{
		getline(file, input);
		
		while (file)
		{
			cout << input << endl;
			
			getline(file, input);
		}
		file.close();
	}
}
void getPunchline(ifstream &file)
{
	string input;
	int length = 0;
	char c = '\0';
	if (file) 
	{
		length = file.tellg();
		
		for (int i = length - 2; i> 0; i--)
		{
			file.seekg(i);
			c = file.get();
			if (c == '\r' || c == '\n') 
				break;
		}
		getline(file, input);
		cout << input << endl;
	}
}