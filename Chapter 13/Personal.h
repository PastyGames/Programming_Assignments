#ifndef PERSONAL_H
#define PERSONAL_H
#include <string>

using namespace std;

using namespace std;
class Personal {
	private:
		string name;
		string address;
		int age;
		string phone;
	public:
		string getName()
		{ return name;}
		string getAddress()
		{ return address;}
		int getAge()
		{ return age;}
		string getPhone()
		{ return phone;}
		void setName(string n)
		{ name = n; }
		void setAddress(string a)
		{ address = a; }
		void setAge(int a)
		{ age = a; }
		void setPhone(string p)
		{ phone = p; }
		
	
};
#endif