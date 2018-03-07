#include "PoliceOfficer.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "ParkedCar.h"
#include <iostream>

using namespace std;
void examine(ParkedCar car, ParkingMeter meter)
{
	int illegal = meter.getMinsPurchased() - car.getMinutes();
	ParkingTicket ticket;
	if(illegal <= 0)
	{	
		
		PoliceOfficer officer;
		officer.setName("Bob");
		officer.setBadgeNum(95482);

		cout << "\t\tReporting Officer" << endl;
		cout << "Name: " << officer.getName() << endl;
		cout << "Badge #: " << officer.getBadgeNum() << endl;		
		
	}
	ticket.reportFine(car, meter);
}


int main(int argc, char *argv[]) {
	
//	// Initialize Police Officer
//	PoliceOfficer police;
//	police.setName("Bob");
//	police.setBadgeNum(95482);
	
	// Initialize a car.
	ParkedCar car;
	car.setLicense(95866);
	car.setColor("Black");
	car.setMake("GMC");
	car.setModel("Yukon");
	car.setMinutes(70);
	
	// Set minutes purchased
	ParkingMeter meter;
	meter.setMinsPurchased(100);
	
	
	
	examine(car, meter);
}