#ifndef FREEZEBOIL_H
#define FREEZEBOIL_H
#include <iostream>

class Temp {
	private:
		double temperature;
		
		
	public:
		Temp()
			{ temperature = 0;}
		Temp(double t)
			{temperature = t;}
		double getTemp()
			{return temperature;}
		void setTemp(double t)
			{temperature = t;}
		bool isEthylFreezing()
		{
			if (temperature <= -173)
				return true;
			else
				return false;
		}
		bool isEthylBoiling()
		{
			if(temperature >= 172)
				return true;
			else 
				return false;
		}
		bool isOxygenBoiling()
		{
			if(temperature >= -306)
				return true;
			else 
				return false;
		}
		bool isOxygenFreezing()
		{
			if(temperature <= -362)
				return true;
			else 
				return false;
		}
		bool isWaterFreezing()
		{
			if(temperature <= 32)
				return true;
			else 
				return false;
		}
		bool isWaterBoiling()
		{
			if(temperature >= 212)
				return true;
			else 
				return false;
		}		
};
#endif