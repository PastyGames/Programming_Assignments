#ifndef PARKEDCAR_H
#define PARKEDCAR_H
#include <string>

using namespace std;

class ParkedCar 
{
	private:
		string make;
		string model;
		string color;
		int licenseNum;
		double minutes;
		
	public:
		ParkedCar(){}
		~ParkedCar(){}
		
		// mutator functions
		void setMake(string m)
			{make = m;}
		void setModel(string m)
			{model = m;}
		void setColor(string c)
			{color = c;}
		void setLicense(int l)
			{licenseNum = l;}
		void setMinutes(double m)
			{minutes = m;}
		
		// accessor functions
		string getMake()
			{return make;}
		string getModel()
			{return model;}
		string getColor()
			{return color;}
		int getLicense()
			{return licenseNum;}
		double getMinutes()
			{return minutes;}
		 
};
#endif