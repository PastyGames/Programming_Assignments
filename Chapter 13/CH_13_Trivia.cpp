#include "TRIVIA.H"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) 
{
	const int SIZE = 1;
	Trivia quiz[SIZE];
	string temp;
	int num;
	int player1 = 0;
	int player2 = 0;
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter the question: ";
		getline(cin, temp);
		quiz[i].setQuestion(temp);
		cout << "Enter answer #1: ";
		getline(cin, temp);
		quiz[i].setAnswer1(temp);
		cout << "Enter answer #2: ";
		getline(cin, temp);
		quiz[i].setAnswer2(temp);
		cout << "Enter answer #3: ";
		getline(cin, temp);
		quiz[i].setAnswer3(temp);
		cout << "Enter answer #4: ";
		getline(cin, temp);
		quiz[i].setAnswer4(temp);
		cout << "Which answer is correct 1 - 4: ";
		cin >> num;
		quiz[i].setCorrect(num);
	}
	
	for (int z = 0; z < SIZE; z++)
	{
		cout << endl;
		cout << quiz[z].getQuestion() << endl;
		cout << "1. " << quiz[z].getAnswer1() << endl;
		cout << "2. " << quiz[z].getAnswer2() << endl;
		cout << "3. " << quiz[z].getAnswer3() << endl;
		cout << "4. " << quiz[z].getAnswer4() << endl;
		cout << "Enter your choice: ";
		cin >> num;
		if (num == quiz[z].getCorrect()) 
			player1++;
	}
	for (int k = 0; k < SIZE; k++)
	{
		cout << quiz[k].getQuestion() << endl;
		cout << "1. " << quiz[k].getAnswer1() << endl;
		cout << "2. " << quiz[k].getAnswer2() << endl;
		cout << "3. " << quiz[k].getAnswer3() << endl;
		cout << "4. " << quiz[k].getAnswer4() << endl;
		cout << "Enter your choice: ";
		cin >> num;
		if (num == quiz[k].getCorrect()) 
			player2++;
	}
	cout << endl;3
	if (player1 > player2)
		cout << "Player one is the winner with " << player1 << " correct answers!" << endl;
	else  
		cout << "Player two is the winner with " << player2 << " correct answers!" << endl;
}