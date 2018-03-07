#ifndef CONVERT_H
#define CONVERT_H
#include <string>
#include <iostream>
#include <cmath>

class Convert {
	private:
		int num;
		int numConverted;
		static int placeHolder;
		static std::string number;
		static int idk;
	public:
		std::string getOctal();
		void doMath(int);
		Convert(int n)
		{
			num = n;
			placeHolder = n;
		}
		// int getHex(int);
// 		int getDecimal(int);
		


};
// static initiliazations
std::string Convert::number = "";
int Convert::placeHolder = 0;
int Convert::idk = 2097152;






void Convert::doMath(int power)
{
	int temp = placeHolder;
	temp = floor(placeHolder / power);
	number += std::to_string(temp);
	if(temp == 0)
		placeHolder = num;
	else
		placeHolder %= (power * temp);
	
	
	if ((placeHolder / idk) >= 1)
	{
		idk /= 8;
		doMath(idk);
	}
	else {
		number += std::to_string(0);
		idk /= 8;
		doMath(idk);
	}
	// return statement
	if(idk == 1)
		return;
}
std::string Convert::getOctal()
{
	// if called more than once during the duration of program have to reset fields
	number = "";
	placeHolder = num;
	
	doMath(idk);
	
	return number;
	
}
#endif