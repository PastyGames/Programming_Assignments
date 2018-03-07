#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"

class ProductionWorker : public Employee {
	private:
		int shift;
		double payRate;
	public:
		int getShift()
			{return shift;}
		double getPay()
			{return payRate;}
		void setShift(int s)
			{shift = s;}
		void setPay(double p)
			{payRate = p;}
		ProductionWorker(int s, double p)
		{
			shift = s;
			payRate = p;
		}
		
	
	
};
#endif