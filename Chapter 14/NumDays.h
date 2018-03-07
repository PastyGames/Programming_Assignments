#ifndef NUMDAYS_H
#define NUMDAYS_H
#include <iostream>
#include <string>

using namespace std;

class NumDays {
	private:
		double workHours;
		double days;
	public:
		NumDays(double h)
			{
				workHours = h;
				
			}
		NumDays()
		{
			workHours = 0;
			days = 0;
		}
		void setHours(double h)
		{
			workHours = h;
			days = workHours / 12;
		}
		void setDays(double d)
		{
			days = d;
			workHours *= days;
		}
		void calculate();
		const double getHours()
			{return workHours;}
		const double getDays()
			{return days;}
		NumDays operator ++();
		NumDays operator ++(int);
		NumDays operator --();
		NumDays operator --(int);
		NumDays operator +(const NumDays &);
		NumDays operator -(const NumDays &);
		
		


};
void NumDays::calculate()
{
	days = workHours / 8;
	cout << "Your worked: " << days << " days" << endl;
	cout << "That's " << workHours << " hours" << endl;
}
NumDays NumDays::operator ++()
{
	++workHours;
	calculate();
	return *this;
}
NumDays NumDays::operator --()	
{
	--workHours;
	calculate();
	return *this;
}
NumDays NumDays::operator + (const NumDays &right)	
{
	NumDays temp(0);
	temp.workHours = workHours + right.workHours;
	calculate();
	return temp;
}
NumDays NumDays::operator - (const NumDays &right)
{
	NumDays temp(0);
	temp.workHours = workHours - right.workHours;
	calculate();
	return temp;
}
NumDays NumDays::operator --(int)
{
	NumDays temp(0);
	temp.setHours(workHours);
	temp.setDays(days);
	calculate();
	workHours--;
	return temp;
}
NumDays NumDays::operator ++(int)
{
	NumDays temp(0);
	temp.setHours(workHours);
	temp.setDays(days);
	calculate();
	workHours++;
	return temp;
}

#endif