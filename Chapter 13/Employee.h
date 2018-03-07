#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee {
	private: 
		std::string name;
		int idNumber;
		std::string department;
		std::string position;
	public:
		Employee(std::string n, int i, std::string d, std::string p)
		{ 	name = n; 
			idNumber = i;
			department = d;
			position = p;
		}
		Employee(std::string n, int i)
		{
			name = n;
			idNumber = i;
			department = "";
			position = "";
		}
		Employee()
		{
			name = "";
			idNumber = 0;
			department = "";
			position = "";
		}
		
		std::string getName() const
			{ return name; }
		int getId() const
			{ return idNumber;}
		std::string getDepartment() const
			{ return department; }
		std::string getPosition() const	
			{ return position; }
			
		void setName(std::string n)
			{ name = n; }
		 void setId(int i)
			{ idNumber = i; }
		void setDepartment(std::string d)
			{ department = d; }
		void setPosition(std::string p)
			{ position = p; }
			
};

#endif