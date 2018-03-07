#include <iostream>
#include <string>

using namespace std;

struct weather {
	double rainfall;
	double highTemp;
	double lowTemp;
	double avgTemp;
};


int main(int argc, char *argv[]) 
{
	double avgMonthRain = 0;
	double high;
	double low;
	int savedSubscript;
	weather forecast[12];
	string months [] = {"January" , "Feburary", "March", "April", "May",
					"June", "July", "August", "September", "October", "November", "Decemeber"};
	
	for (int i = 0; i < 12; i++)
	{
		cout << "\t\t" << months[i] << "s' Data" << endl;
		cout << "Enter amount of rainfall: ";
		cin >> forecast[i].rainfall;
		cout << "Highest temperature: ";
		cin >> forecast[i].highTemp;
		while (forecast[i].highTemp < -100 || forecast[i].highTemp > 140) 
		{
			cout << "Invalid input try again: ";
			cin >> forecast[i].highTemp;
		}
		cout << "Lowest temperature: ";
		cin >> forecast[i].lowTemp;
		while (forecast[i].lowTemp < -100 || forecast[i].lowTemp > 140) 
		{
			cout << "Invalid input try again: ";
			cin >> forecast[i].lowTemp;
		}
		forecast[i].avgTemp = (forecast[i].highTemp + forecast[i].lowTemp) / 2;
	}
	
	for (int k = 0; k < 12; k++)
	{
		avgMonthRain += forecast[k].rainfall;
	}
	high = forecast[0].highTemp;
	for (int p = 0; p < 12; p++)
	{
		if (high < forecast[p].highTemp) 
		{
			high = forecast[p].highTemp;
			savedSubscript = p;
		}
	}
	cout << endl;
	cout << "The average monthly rainfall: " << (avgMonthRain / 12) << endl;
	cout << "The year amount of rainfall: " << avgMonthRain << endl;
	cout << "The highest temperature was in " << months[savedSubscript] << " which was: " << high << " degrees" << endl;
	
	low = forecast[0].lowTemp;
	for (int u = 0; u < 12; u++)
	{
		if (low > forecast[u].lowTemp)
		{
			low = forecast[u].lowTemp;
			savedSubscript = u;
		}
	}
	cout << "The lowerst temperature was in " << months[savedSubscript] << " which was: " << low << " degrees" << endl;
}