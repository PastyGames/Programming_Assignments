#include <iostream>
#include <iomanip>

using namespace std;

class Date {
	public:
		int month, day;
		int year;
		void numDate(int, int, int);
		void wrdDate(int, int, int);
		void wordDate(int, int, int);
};

void Date::numDate(int m, int d, int y)
{
	if (m < 10 && d >= 10)
		cout << setfill('0') << setw(2) << m << "/" << d << "/" << year << endl;
	else if (m > 10 && d < 10) 
		cout << m << "/" << setfill('0') << setw(2) <<  d << "/" << year << endl;
	else if (m < 10 && d < 10)
	{
		cout << setfill('0') << setw(2) << m << "/" << setfill('0') << setw(2) << d;
		cout << "/" << y << endl;
	}
	else
		cout << m << "/" << d << "/" << y << endl;
}

void Date:: wrdDate(int m, int d, int y)
{
	switch (m) {
		case 1:
			cout << "Januaray " << setfill('0') << setw(2) << d << ", " << y << endl;
			break;
		case 2: 
			cout << "Febuary " << setfill('0') << setw(2) << d << ", " << y << endl;
			break;
		case 3:
			cout << "March " << setfill('0') << setw(2) << d << ", " << y << endl;
			break;
		case 4:
			cout << "April " << setfill('0') << setw(2) << d << ", " << y << endl;
			break;
		case 5:
			cout << "May " << setfill('0') << setw(2) << d << ", " << y << endl;
			break;
		case 6:
			cout << "June " << setfill('0') << setw(2) << d << ", " << y << endl;
			break;
		case 7:
			cout << "July " << setfill('0') << setw(2) << d << ", " << y << endl;
			break;
		case 8:
			cout << "August " << setfill('0') << setw(2) << d << ", " << y << endl;
			break;
		case 9:
			cout << "September " << setfill('0') << setw(2) << d << ", " << y << endl;
			break;
		case 10:
			cout << "October " << setfill('0') << setw(2) << d << ", " << y << endl;
			break;
		case 11:
			cout << "Novemeber " << setfill('0') << setw(2) << d << ", " << y << endl;
			break;
		case 12:
			cout << "Decemeber " << setfill('0') << setw(2) << d << ", " << y << endl;
			break;
		default:
			break;
	}
}

void Date::wordDate(int m, int d, int y)
{
	switch (m) {
		case 1:
			cout << setfill('0') << setw(2) << d << " Januaray " << y << endl;
			break;
		case 2: 
			cout << setfill('0') << setw(2) << d << " Febuary " << y << endl;
			break;
		case 3:
			cout << setfill('0') << setw(2) << d << " March " <<  y << endl;
			break;
		case 4:
			cout << setfill('0') << setw(2) << d << " April " << y << endl;
			break;
		case 5:
			cout << setfill('0') << setw(2) << d << " May " <<   y << endl;
			break;
		case 6:
			cout << setfill('0') << setw(2) << d << " June " <<  y << endl;
			break;
		case 7:
			cout << setfill('0') << setw(2) << d << " July " << y << endl;
			break;
		case 8:
			cout << setfill('0') << setw(2) << d << " August " <<  y << endl;
			break;
		case 9:
			cout << setfill('0') << setw(2) << d << " September " << y << endl;
			break;
		case 10:
			cout << setfill('0') << setw(2) << d << " October " <<  y << endl;
			break;
		case 11:
			cout << setfill('0') << setw(2) << d << " Novemeber " <<  y << endl;
			break;
		case 12:
			cout << setfill('0') << setw(2) << d << " Decemeber "  << y << endl;
			break;
		default:
			break;
	}

}

int main(int argc, char *argv[]) 
{
	Date today;
	cout << "Enter what day it is: ";
	cin >> today.day;
	while (today.day < 1 || today.day > 31) 
	{
		cout << "Invalid input can't have a day below 1 or greater than 31, try again: ";
		cin >> today.day;
	}
	
	cout << "Enter what month it is: ";
	cin >> today.month;
	while (today.month < 1 || today.month > 12) 
	{
		cout << "Invalid input can't have a month below 1 or greater than 12, try again: ";
		cin >> today.month;
	}
	
	cout << "Enter the year: ";
	cin >> today.year;
	
	today.numDate(today.month, today.day, today.year);
	today.wrdDate(today.month, today.day, today.year);
	today.wordDate(today.month, today.day, today.year);
}