#ifndef TESTSCORES_H
#define	TESTSCORES_H
#include <iostream>

using namespace std;

class TestScores {
	private:
		double score1;
		double score2;
		double score3;
	public:
		TestScores(double s1, double s2, double s3)
		{
			score1 = s1;
			score2 = s2;
			score3 = s3;
			calcAverage(s1,s2,s3);
		}
		double getScore1() const
			{ return score1; }
		double getScore2() const
			{ return score2; }
		double getScore3() const
			{ return score3; }
		void setScore1(double s1)
			{ score1 = s1;}
		void setScore2(double s2)
			{ score2 = s2;}
		void setScore3(double s3)
			{ score3 = s3;}
		void calcAverage(double, double, double);
};
void TestScores::calcAverage(double s1, double s2, double s3)
{
	double average = 0.0;
	average = (s1 + s2 + s3) / 3;
	cout << "The average score is: " << average << endl;
}
#endif