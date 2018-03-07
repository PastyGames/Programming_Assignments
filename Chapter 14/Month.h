#ifndef MONTH_H
#define MONTH_H
#include <string>
#include <cctype>
#include <iostream>

using namespace std;

class Month {
	private:
		string name;
		int monthNumber;
	public:
		Month operator ++();
		Month operator ++(int);
		Month operator --();
		Month operator --(int);
		Month operator +(const Month &);
		Month operator -(const Month &);
 		friend ostream &operator << (ostream &strm, const Month &obj)
		{
			strm << "Month number: " << obj.monthNumber << "\n" << "Month name: " << obj.name << endl;
			return strm;
		}
		friend istream &operator >> (istream &strm, Month &obj)
		{
			cout << "Month name: ";
			strm >> obj.name;
			cout << "Month Number: ";
			strm >> obj.monthNumber;
			return strm;
		}
		Month()
		{
			monthNumber = 1;
			name = "January";
		}
		Month(string m)
		{
			name = m;
			switchName();
			
		}
		Month(int m)
		{
			monthNumber = m;
			switchMonth();
		}
		Month(string m, int i)
		{
			monthNumber = i;
			name = m;
		}
		void switchMonth()
		{
			switch(monthNumber)
			{
				case 1:
					name = "January";
					break;
				case 2:
					name = "February";
					break;
				case 3:
					name = "March";
					break;
				case 4:
					name = "April";
					break;
				case 5:
					name = "May";
					break;
				case 6:
					name = "June";
					break;
				case 7:
					name = "July";
					break;
				case 8:
					name = "August";
					break;
				case 9:
					name = "September";
					break;
				case 10:
					name = "October";
					break;
				case 11:
					name = "November";
					break;
				case 12:
					name = "December";
					break;
			}
		}
		void switchName()
		{
			enum Months { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST,
							SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};
			Months m = static_cast<Months>(monthNumber);
			switch(m)
			{
				case JANUARY:
					monthNumber = 1;
					break;
				case FEBRUARY:
					monthNumber = 2;
					break;
				case MARCH:
					monthNumber = 3;
					break;
				case APRIL:
					monthNumber = 4;
					break;
				case MAY:
					monthNumber = 5;
					break;
				case JUNE:
					monthNumber = 6;
					break;
				case JULY:
					monthNumber = 7;
					break;
				case AUGUST:
					monthNumber = 8;
					break;
				case SEPTEMBER:
					monthNumber = 9;
					break;
				case OCTOBER:
					monthNumber = 10;
					break;
				case NOVEMBER:
					monthNumber = 11;
					break;
				case DECEMBER:
					monthNumber = 12;
					break;
			}
		}
		void setName(string n)
			{name = n;}
		void setMonthNumber(int m)
			{monthNumber = m;}
		string getName()
			{return name;}
		int getMonthNumber()
			{return monthNumber;}
};
Month Month::operator ++()
{
	++monthNumber;
	if(monthNumber > 12)
		monthNumber = 1;
	switchMonth();
	return *this;
}
Month Month::operator --()
{
	--monthNumber;
	if(monthNumber < 1)
		monthNumber = 12;
	switchMonth();
	return *this;
}
Month Month::operator ++(int)
{
	Month temp;
	temp.setName(name);
	temp.setMonthNumber(monthNumber);
	switchMonth();
	if(monthNumber > 12)
		monthNumber = 1;
	return temp;
}
Month Month::operator --(int)
{
	Month temp;
	temp.setName(name);
	temp.setMonthNumber(monthNumber);
	switchMonth();
	if(monthNumber < 1)
		monthNumber = 12;
	monthNumber--;
	return temp;
}














#endif