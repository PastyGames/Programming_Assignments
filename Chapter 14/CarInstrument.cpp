#include <iostream>
#include "Odometer.h"
#include "FuelGauge.h"
using namespace std;

void filling(FuelGauge&);
void drive(Odometer&, FuelGauge&, double);

int main(int argc, char *argv[]) 
{
	FuelGauge fuel(0);
	Odometer odom(1500);
	filling(fuel);
	drive(odom, fuel, 100);
}

void filling(FuelGauge &fuel)
{
	cout << "Time to Fuel up!" << endl;
	while (fuel.getFuel() < 15)
	{
		++fuel;
		cout << fuel.getFuel() << " mile in the tank" << endl;
	}
	cout << "The tank is now filed!" << endl;
}
void drive(Odometer &o, FuelGauge &fuel, double distance)
{
	for(int i = 0; i < distance; i++)
	{
		++o;
		o.adjust(fuel);
	}
	o.getMile();
	fuel.fillUp();
}
