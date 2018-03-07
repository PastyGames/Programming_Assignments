#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>

class PersonData {
	private:
		std::string lastName;
		std::string firstName;
		std::string address;
		std::string city;
		std::string state;
		std::string zip;
		std::string phone;;
	public:
		// Constructor
		PersonData()
		{}
		PersonData(std::string l, std::string f, std::string a, std::string c, std::string s, std::string z, std::string p)
			{lastName = l; firstName = f; address = a; city = c; state = s; zip = z; phone = p;}
		
		// Mutattor Functions
		void setLast(std::string l)
			{lastName = l;}
		void setFirst(std::string f)
			{firstName = f;}
		void setAddress(std::string a)
			{address = a;}
		void setCity(std::string c)
			{city = c;}
		void setState(std::string s)
			{state = s;}
		void setZip(std::string z)
			{zip = z;}
		void setPhone(std::string p)
			{phone = p;}
		
		// Accessor Functions
		std::string getLast()
			{return lastName;}
		std::string getFirst()
			{return firstName;}
		std::string getAddress()
			{return address;}
		std::string getCity()
			{return city;}
		std::string getState()
			{return state;}
		std::string getZip()
			{return zip;}
		std::string getPhone()
			{return phone;}
};
#endif