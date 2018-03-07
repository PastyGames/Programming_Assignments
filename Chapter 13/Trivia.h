#ifndef TRIVIA_H
#define TRIVIA_H
#include <iostream>
#include <string>

using namespace std;

class Trivia {
	private:
		string question;
		string answer1;
		string answer2;
		string answer3;
		string answer4;
		int correct;
	public:
		void setQuestion(string q)
			{ question = q;}
		void setAnswer1(string a)
			{ answer1 = a;}
		void setAnswer2(string a)
			{ answer2 = a;}
		void setAnswer3(string a)
			{ answer3 = a;}
		void setAnswer4(string a)
			{ answer4 = a;}
		void setCorrect(int c)
			{ correct = c;}
		string getQuestion()
			{ return question;}
		string getAnswer1()
			{ return answer1;}
		string getAnswer2()
			{ return answer2;}
		string getAnswer3()
			{ return answer3;}
		string getAnswer4()
			{ return answer4;}
		int getCorrect()
			{ return correct;}
		

};
#endif