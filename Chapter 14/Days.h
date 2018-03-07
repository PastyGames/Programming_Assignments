#ifndef DAYS_H
#define DAYS_H
#include<string>
#include<iostream>

using namespace std;

class Days {
	private:
		int day;
		static string months[12];
	public: 
		Days(int d)
		{
			day = d;
			print(day);
		}
		void print(int d);
		
		


};
string Days::months[] = {"January", "Feburary", "March", "April", "May", "June", "July", "August",
				"September", "October", "November", "December"};
				
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