#include <iostream>
#include <string>

using namespace std;

void testQuestions(int);
void checkTheGrade(string [], string [], int);

const int NUM_ELEMS = 20;



int main(int argc, char *argv[]) 
{
	testQuestions(NUM_ELEMS);
	
}

void testQuestions(int num)
{
	string testAnswers[] = {"A", "D", "B", "B", "C", "B", "A","B","C", "D", "A", "C", "D", "B", "D","C",
							 "C", "A", "D", "B"};
							
	string testerAnswers[NUM_ELEMS];
	int number = 20;
	
	for (int i = 0; i < num; i++)
	{
		cout << "Enter your answer for the " << number << " questions: ";
		cin >> testerAnswers[i];
		--number;
	}
	checkTheGrade(testAnswers, testerAnswers, NUM_ELEMS);
}

void checkTheGrade(string correctAnswers[], string choices[], int num)
{
	string message;
	int correct = 0;
	
	for (int i = 0; i < num; i++)
	{
		if (correctAnswers[i] == choices[i])
			correct++;
	}
	
	if (correct >= 15)
	{
		message = "You passed the exam, you scored ";
		cout << message << correct << "/20";
	} else {
		message = "You didnt pass the exam, you scored ";
		cout << message << correct << "/20";
	}
	
	
}