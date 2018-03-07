#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) 
{
	const int questions = 20;
	ifstream solutions;
	ifstream answers;
	char correct [20];
	
	solutions.open("CorrectAnswers.txt");
	
	if (solutions)
	{
		for (int i = 0; i < questions; i++)
		{
			solutions >> correct[i];
		}
	}
	solutions.close();
	cout << correct[0];

}