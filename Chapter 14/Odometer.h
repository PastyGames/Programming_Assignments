#ifndef ODOMETER_H
#define ODOMETER_H
#include "FuelGauge.h"
#include <iostream>

class Odometer {
	private:
		double currMile;
		double oldMile;
		
	public:
		Odometer(double m)
		{
			currMile = m;
			oldMile = 0;
		}
		void getMile()
			{ std::cout << "The current mileage on the vehicle is: " << currMile << " miles." << std::endl;}
		Odometer operator++();
		void adjust(FuelGauge &fuel)
		{
			if (oldMile / 24 == 1)
			{
				--fuel;
				oldMile = 0;
			}
		}
};
Odometer Odometer::operator++()
{
	if(currMile == 999999)
		currMile = 0;
	currMile++;
	oldMile++;
	return *this;
}
#endif