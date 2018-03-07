#ifndef FUELGAUGE_H
#define FUELGAUGE_H
#include <iostream>

class FuelGauge {
	private:
		double currFuel;
		
	public:
		FuelGauge(double f)
			{currFuel = f;}
		double getFuel()
			{return currFuel;}
		void fillUp()
			{ std::cout << "The current amound of fuel is: " << currFuel << " gallons" << std::endl;}
		FuelGauge operator++();
		FuelGauge operator--();
};
FuelGauge FuelGauge::operator++()
{
	if(currFuel == 15)
		return *this;
	else {
		++currFuel;
		return *this;
	}
}
FuelGauge FuelGauge::operator--()
{
	if(currFuel == 0)
		return *this;
	else {
		--currFuel;
		return *this;
	}
}
#endif