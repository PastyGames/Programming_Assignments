#ifndef MORTGAGE_H
#define MORTGAGE_H
#include <iostream>
#include <cmath>

class Mortgage {
	private:
		double monthly;		
		double loan;
		double rate;
		double years;
	public:
		Mortgage(double l, double r, double y)
		{
			loan = l;
			rate = r;
			years = y;	
		}
		Mortgage(){}
		
		void setLoan(double l)
			{ loan = l;}
		void setRate(double r)
			{ rate = r;}
		void setYears(double y)
			{ years = y;}
		double getPayment(double l, double r, double y)
			{
				double term = (1 + (r / 12)); 
				double exponent = 12 * y;
				monthly = (l * (r / 12) * (pow(term, exponent)) ) / ( (pow(term,exponent)) - 1);
				return monthly;
			}
		double getPaid()
			{ 
				int paid = years * 12;
				return (paid * monthly);
			}
	
	
	
	
	
	
	
};
#endif