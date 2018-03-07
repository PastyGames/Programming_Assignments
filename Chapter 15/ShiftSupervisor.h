#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H
#include "Employee.h"

class ShiftSupervisor : public Employee {
	private:
		double anSal;
		double bonus;
	public:
		ShiftSupervisor(double a, double b, std::string n, int e, std::string h) : Employee(n, e, h)
		{
			anSal = a;
			bonus = b;
		}
		// Mutator Function
		void setSal(double s)
			{anSal = s;}
		void setBonus(double b)
			{bonus = b;}
		// Accessor Function
		double getSal()
			{return anSal;}
		double getBonus()
			{return bonus;}
};
#endif