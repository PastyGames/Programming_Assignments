#include <iostream>

using namespace std;

struct GradeInfo {
	string name;
	string idNum;
	double * tests;
	double avg;
	char grade;
};


int main(int argc, char *argv[]) 
{
	
	// Declerations of variables & pointers
	int numOfTests;
	int numOfStudents;
	double * testScores = nullptr;
	GradeInfo * students = nullptr;
	
	// Input statements
	cout << "How many tests are there: ";
	cin >> numOfTests;
	int holder = numOfTests;
	cout << "How many students are there: ";
	cin >> numOfStudents;
	
	// Dynamically allocating stuctures and arrays
	testScores = new double[numOfTests];
	students = new GradeInfo[numOfStudents];
	
	// big for loop with all calculations for gradeinfo
	for (int i = 0; i < numOfStudents; i++)
	{
		
		// Declaring structure memebers, name and id num
		int avgTotal = 0;	// to calculate avg from test scores entered
		holder = numOfTests;	// for display reasons
		cout << "Enter the name of the student: ";
		cin >> students[i].name;
		cout << "Enter the Id Number for " << students[i].name << ": ";
		cin >> students[i].idNum;
		
		// initializing all the test scores for the current student, cant enter score below 0
		cout << "Enter " << holder << " scores for " << students[i].name << " with a space between: ";

		for (int z = 0; z < numOfTests; z++)
		{
			cin >> testScores[z];
			while (testScores[z] < 0) 
			{
				cout << "Can't score below a 0, try again: ";
				cin >> testScores[z];
			}
			--holder;
			avgTotal += testScores[z];
		}
		
		// assign the member pointer to the pointer of testScores
		students[i].tests = testScores;
		
		// calculate the avg from the test scores
		students[i].avg = avgTotal / numOfTests;
		
		// get the grade of the student from avg test scores result
		if (students[i].avg > 90 ) 
			students[i].grade = 'A';
		else if (students[i].avg > 80 && students[i].avg < 91)
			students[i].grade = 'B';
		else if (students[i].avg > 70 && students[i].avg < 81)
			students[i].grade = 'C';
		else if (students[i].avg > 60 && students[i].avg < 71)
			students[i].grade = 'D';
		else  
			students[i].grade = 'F';
			
	} // end of for loop
	
	// Display contents of each structure
	cout << endl;
	for (int y = 0; y < numOfTests; y++)
	{
		cout << "\t\t" << students[y].name << "s' Grading Info" << endl;
		cout << "Id Number: " << students[y].idNum << endl;
		cout << "Average Test Score: " << students[y].avg << endl;
		cout << "Final Grade: " << students[y].grade << endl;
		cout << endl;
	}
}