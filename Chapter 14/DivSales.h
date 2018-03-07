#ifndef DIVSALES_H
#define DIVSALES_H
#include <iostream>

using namespace std;

class DivSales {
	private:
		double quarterSales[4];
		static double totalSales;
	public:
		DivSales()
		{}
		double getTotal()
		{return totalSales;}
		void setQuarters(double one, double two, double three, double four)
		{
			quarterSales[0] = one;
			quarterSales[1] = two;
			quarterSales[2] = three;
			quarterSales[3] = four;
			for(int i = 0; i < 4; i++)
				totalSales += quarterSales[i];
		}
		double getSubscript(int in)
		{
			if (in > 3)
			{
				cout << "Subscript out of bounds!";
				cin >> in;
			}
			return quarterSales[in];
		}
};
double DivSales::totalSales = 0;
#endif