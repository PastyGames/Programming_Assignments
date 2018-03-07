#ifndef DAYSMOD_H
#define DAYSMOD_H
#include<string>
#include<iostream>

using namespace std;

class Days {
	private:
		int day;
		static string months[12];
		static int monthDays[12];
		int num;
		string monthly;
	public: 
		Days(int d)
		{
			day = d;
			print(day);
		}
		Days(int, string);
		void print(int, size_t);
		void print(int);
		Days operator ++ ();
		Days operator -- ();
		size_t getIndex();
};
int Days::monthDays[] = {31, 29, 31, 30, 31, 30, 30, 31, 30, 31, 30, 31};
string Days::months[] = {"January", "February", "March", "April", "May", "June", "July", "August",
				"September", "October", "November", "December"};
size_t Days::getIndex()
{
	int found;
	for(int i = 0; i < sizeof(months); i++)
	{
		
		found = months[i].compare(monthly);
		if(found == 0)
		{
			cout << found << endl;
			num = i;
			return num;
		}
	}
	return 7;
}
Days Days::operator--()
{
	--day;
	// num = getIndex();
	if(day < 0)
	{	
		num = num - 1;
		day = monthDays[num];
		monthly = months[num];
	}
	if(monthly == "January" && day == 0)
	{
		cout << "Going back a year" << endl;
		num = 11;
		monthly = months[11];
		day = 31;
	}
	
	print(day, num);
	
	return *this;
}
Days Days::operator++()
{
	++day;
	// num = getIndex();
	if(day > monthDays[num])
	{	
		num = num + 1;
		day = 1;
		monthly = months[num];
	}
	if(monthly == "December" && day == 32)
	{
		cout << "Next year begins" << endl;
		num = 0;
		monthly = months[0];
		day = 1;
	}
	
	print(day, num);
	
	return *this;
}
	
Days::Days(int d, string month)
{
	day = d;
	monthly = month;
	num = getIndex();
	
}				
void Days::print(int d, size_t found)
{
	if(num < 12)	
		cout << monthly << " " << d << endl;
	else
		cout << "Not a valid date!" << endl;
}
void Days::print(int d)
{
	if(d <= 31)
		cout << months[0] << " " << d << endl;
	else if(d > 31 && d <= 60 )
		cout << months[1] << " " << d - 31 << endl;
	else if(d > 60 && d <= 91)
		cout << months[2] << " " << d - 60 << endl;
	else if(d > 91 && d <= 121)
		cout << months[3] << " " << d - 91 << endl;
	else if(d > 121 && d <= 152)
		cout << months[4] << " " << d - 121 << endl;
	else if(d > 152 && d <= 182)
		cout << months[5] << " " << d - 152 << endl;
	else if(d > 182 && d <= 212)
		cout << months[6] << " " << d - 182 << endl;
	else if(d > 212 && d <= 243)
		cout << months[7] << " " << d - 212 << endl;
	else if(d > 243 && d <= 273)
		cout << months[8] << " " << d - 243 << endl;
	else if(d > 273 && d <= 304)
		cout << months[9] << " " << d - 273 << endl;
	else if(d > 304 && d <= 334)
		cout << months[10] << " " << d - 304 << endl;
	else if(d > 334 && d <= 365)
		cout << months[11] << " " << d - 334 << endl;
	else 
		cout << "Not a valid date!" << endl;
}
#endif