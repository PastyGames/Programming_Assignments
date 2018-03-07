#ifndef NUMBERS_H
#define NUMBERS_H
#include <string>
#include <iostream> 
#include <cmath>

using namespace std;

class Numbers {
	private:
		int number;
		static string lessThan[20];
		static string tensPlaces[8];
		static string hundred;
		static string thousand;
	public:
		void convert();
		// Constructors
		Numbers(int n)
		{
			number = n;
			if(n < 0)
				number = 0;
		}
		Numbers()
			{number = 0;};
		
		
		
	



};
// Initializing the static variables and arrays
string Numbers::lessThan[] = {"zero", "one", "two", "three", "four", "five",
						"six", "seven", "eight", "nine", "ten", "eleven",
						"twelve", "thirteen", "fourtreen", "fifthteen",
						"sixteen", "seventeen", "eighteen", "nineteen"};
string Numbers::tensPlaces[] = {"twenty", "thirty", "fourty", "fifty", "sixty",
						"seventy", "eighty", "ninety"};
string Numbers::hundred = "hundred";
string Numbers::thousand = "thousand";
void Numbers::convert()
{
	if(number > -1 && number < 20)
	{
		cout << lessThan[number];
	}
	else if(number > 20 && number < 100)
	{
		int tens = floor(number / 10) - 2;
		int ones = number % 10;
		cout << tensPlaces[tens] << "-" << lessThan[ones] << endl; 
	}
	else if(number > 100 && number < 1000)
	{
		int hundreds = floor(number / 100);
		int checker = floor(number % 100);
		int tens = (floor(number % 100) / 10) - 2;
		int holder = (floor(number % 100));
		int ones = (holder % ((tens + 2) * 10));
		if(checker < 20)
		{
			cout << lessThan[hundreds] << hundred << lessThan[checker];
		}
		else if(ones == 0)
			cout << lessThan[hundreds] << " " << hundred << " and " << tensPlaces[tens] << endl; 
		else
			cout << lessThan[hundreds] << " " << hundred << " and " << tensPlaces[tens] << "-" << lessThan[ones] << endl;  
	}
	else
	{
		int thousands = floor(number / 1000);
		int hundreds = floor(number % 1000) / 100;
		// holds remainder for 100s
		int checker = floor(number % 1000);
		// holds the remainder for 10s
		int aChecker = checker % 100;
		int tens = ((checker % 100) / 10);
		int ones = (aChecker % ((aChecker / 10) * 10));
		
	
		if(hundreds > 0 && aChecker < 20)
			cout << "i printed" << lessThan[thousands] << " " << thousand << " " << lessThan[hundreds] << " " << hundred << " and " << lessThan[aChecker] << endl; 
		else if(ones == 0 && hundreds > 0 && tens > 0)
			cout << lessThan[thousands] << " " << thousand << " " << lessThan[hundreds] << " " << hundred << " and " << tensPlaces[tens - 2] << endl;
		else if(hundreds > 0 && aChecker > 19)
			cout <<"print" << lessThan[thousands] << " " << thousand << " " << lessThan[hundreds] << " " << hundred << " and " << tensPlaces[tens - 2] << "-" << lessThan[ones] << endl;
		else if(hundreds == 0 && aChecker < 20)
			cout << lessThan[thousands] << " " << thousand << " and " << lessThan[aChecker] << endl;
		else if(hundreds == 0 && aChecker > 20)
			cout << lessThan[thousands] << " " << thousand << " and " << tensPlaces[tens - 2] << "-" << lessThan[ones] << endl;
		else if(hundreds == 0 && ones == 0)
			cout << lessThan[thousands] << " " << thousand << " and " << tensPlaces[tens - 2] << endl;
		else if(hundreds == 0 && tens == 0)
			cout << lessThan[thousands] << " " << thousand << " and " << lessThan[ones] << endl;
		else if(hundreds == 0 && tens == 0 && ones == 0)
			cout << lessThan[thousands] << " " << thousand << endl;
		else if(tens == 0 && hundreds > 0 && ones > 0)
			cout << "hi";
			
		
	}
}
#endif
						
						
						
						
						
						
						
						