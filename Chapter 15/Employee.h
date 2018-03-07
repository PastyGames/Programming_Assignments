#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee {
	private:
		std::string name;
		int empNum;
		std::string hireDate;
	public:
		Employee(std::string n, int e, std::string h)
		{ 
			name = n;
			empNum = e;
			hireDate = h;
		}
		Employee()
		{}
		// Mutator functions
		void setName(std::string n)
			{name = n;}
		void setEmp(int e)
			{ empNum = e;}
		void setHire(std::string h)
			{ hireDate = h;}
		// Accessor functions
		std::string getName()
			{return name;}
		int getEmp()
			{return empNum;}
		std::string getHire()
			{return hireDate;}
		
		
};
#endif