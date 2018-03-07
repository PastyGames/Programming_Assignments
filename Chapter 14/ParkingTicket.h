#ifndef ParkingTicket_H
#define ParkingTicket_H
#include <iostream>
#include "ParkedCar.h"
#include "PoliceOfficer.h"
#include "ParkingMeter.h"

using namespace std;

class ParkingTicket {
	private:
		
		
	public:
		ParkingTicket(){}
		~ParkingTicket(){}
		void reportFine(ParkedCar car, ParkingMeter meter)
		{
			double ticketAmount = 0;
			const double FINE = 25;
			const double ADDITIONAL = 10;
			double leftOverMins = meter.getMinsPurchased() - car.getMinutes();
			if(leftOverMins <= 0)
			{
				leftOverMins *= -1;
				double hours = leftOverMins / 60.0;
				if(hours > 0)
					ticketAmount += FINE;
					--hours;
				while (hours > 0)
				{
					ticketAmount += ADDITIONAL;
					--hours;
				}

				// REPORTING THE TICKET
				cout << "\t\tYou've earned a ticket!" << endl;
				cout << "Make: " << car.getMake() << endl;
				cout << "Model: " << car.getModel() << endl;
				cout << "Color: " << car.getColor() << endl;
				cout << "License Plate #: " << car.getLicense() << endl;
				
				// Reporting Officer details
				// PoliceOfficer officer;
// 				officer.setName("Bob");
// 				officer.setBadgeNum(95482);
//
// 				cout << "\t\tReporting Officer" << endl;
// 				cout << "Name: " << officer.getName() << endl;
// 				cout << "Badge #: " << officer.getBadgeNum() << endl;
				return;
			}
			else 
			{
				cout << "No Fine here, time remaining: " << leftOverMins << " minutes." << endl;
			}

		}

}; 

#endif