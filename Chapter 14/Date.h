#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <iomanip>

class Date {
	private:
		int month, day;
		int year;
	public:
		void numDate(int, int, int);
		void wrdDate(int, int, int);
		void wordDate(int, int, int);
		Date operator ++();
		Date operator --();
		Date operator ++(int);
		Date operator --(int);
		Date operator -();
		
		friend ostream &operator << (ostream &, const Date &);
		friend istream &operator >> (istream &, const Date &);
};
ostream &operator << (ostream &strm, const Date &obj)
{
	switch (month) {
		case 1:
			strm << "Januaray " << setfill('0') << setw(2) << d << ", " << y;
			return strm;
			break;
		case 2: 
			strm << "Febuary " << setfill('0') << setw(2) << d << ", " << y;
			return strm;
			break;
		case 3:
			strm << "March " << setfill('0') << setw(2) << d << ", " << y;
			return strm;
			break;
		case 4:
			strm << "April " << setfill('0') << setw(2) << d << ", " << y;
			return strm;
			break;
		case 5:
			strm << "May " << setfill('0') << setw(2) << d << ", " << y;
			return strm;
			break;
		case 6:
			strm << "June " << setfill('0') << setw(2) << d << ", " << y;
			return strm;
			break;
		case 7:
			strm << "July " << setfill('0') << setw(2) << d << ", " << y;
			return strm;
			break;
		case 8:
			strm << "August " << setfill('0') << setw(2) << d << ", " << y;
			return strm;
			break;
		case 9:
			strm << "September " << setfill('0') << setw(2) << d << ", " << y;
			return strm;
			break;
		case 10:
			strm << "October " << setfill('0') << setw(2) << d << ", " << y;
			return strm;
			break;
		case 11:
			strm << "Novemeber " << setfill('0') << setw(2) << d << ", " << y;
			return strm;
			break;
		case 12:
			strm << "Decemeber " << setfill('0') << setw(2) << d << ", " << y;
			return strm;
			break;
		default:
			strm << "Invalid";
			return strm;
			break;
	}
}



Date Date::operator ++()
{
	++day;
	//CALL DISPLAY FUNCTION
	
	return *this;
}
Date Date::operator ++(int)
{
	Date temp;
	temp.month = month;
	temp.day = day;
	temp.year = year;
	// CALL DISPLAY FUNCTION
	
	temp.day = day + 1;
	return temp;
}
Date Date::operator --()
{
	--day;
	//CALL DISPLAY FUNCTION
	
	return *this;
}
Date Date::operator--(int)
{
	Date temp;
	temp.month = month;
	temp.day = day;
	temp.year = year;
	// CALL DISPLAY FUNCTION
	
	temp.day = day + 1;
	return temp;
}
Date Date::operator -(const Date & right)
{
	Date temp;
	temp.day = day - right.day;
	// CALL DISPLAY FUNCTION
	
	return temp;
}


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