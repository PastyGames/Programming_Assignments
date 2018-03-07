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
		static int octalHigh;
		static int hexHigh;
	public:
		std::string getOctal();
		std::string getHex();
		void doMath();
		int getNum()
			{return num;}
		void setNum(int n)
			{num = n;}
			
		Convert(int n)
		{
			num = n;
			placeHolder = num;
		}
		void goDoHex();
// 		int getDecimal(int);
		


};
// static initiliazations
std::string Convert::number = "";
int Convert::placeHolder = 0;
int Convert::octalHigh = 2097152;
int Convert::hexHigh = 1048576;






void Convert::doMath()
{
	int temp = placeHolder;
	temp = placeHolder / octalHigh;
	number += std::to_string(temp);
	if(temp == 0)
		// Do NOTHING apparently
		temp = 0;
	else
		placeHolder %= (octalHigh * temp);
	if(octalHigh == 1)
		return;
	if ((placeHolder / octalHigh) >= 1)
	{
		octalHigh /= 8;
		doMath();
	}
	else {
		// number += std::to_string(0);
		octalHigh /= 8;
		doMath();
	}
	
	
}
void Convert::goDoHex()
{
//	enum hexa { ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, LetA, LetB, LetC, LetD,
//		LetE, LetF};
	int temp = placeHolder;
	temp = placeHolder / hexHigh;
	if (temp >= 1)
	{
		switch(temp)
		{
			case 1:
				number += std::to_string(1);
				break;
			case 2:
				number += std::to_string(2);
				break;
			case 3:
				number += std::to_string(3);
				break;
			case 4:
				number += std::to_string(4);
				break;
			case 5:
				number += std::to_string(5);
				break;
			case 6:
				number += std::to_string(6);
				break;
			case 7:
				number += std::to_string(7);
				break;
			case 8:
				number += std::to_string(8);
				break;
			case 9:
				number += std::to_string(9);
				break;
			case 10:
				number += "A";
				break;
			case 11:
				number += "B";
				break;
			case 12:
				number += "C";
				break;
			case 13:
				number += "D";
				break;
			case 14:
				number += "E";
				break;
			case 15:
				number += "F";
				break;
		}
	}
	else 
	{
		number += std::to_string(0);
	}
	if (temp == 0)
		temp = 0;
	else
	{
		placeHolder %= (hexHigh * temp);
	}
	if(hexHigh == 1)
	{
		return;
	}
	hexHigh /= 16;
	goDoHex();
	
		// goDoHex();
	// }
	
	
}
std::string Convert::getHex()
{
	// if called more than once during the duration of program have to reset fields
	number = "";
	placeHolder = num;
	hexHigh = 1048576;
	
	// call to recursive function for hex
	goDoHex();
	return number;
}
std::string Convert::getOctal()
{
	// if called more than once during the duration of program have to reset fields
	number = "";
	placeHolder = num;
	octalHigh = 2097152;
	
	// Call to recursive function octal
	doMath();
	// returning the string produced
	return number;
	
}
#endif