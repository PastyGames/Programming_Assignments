#ifndef PoliceOfficer_H
#define PoliceOfficer_H
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include <string>
using namespace std;


class PoliceOfficer {
	private:
		string name;
		int badgeNum;
	public:
		PoliceOfficer()
		{}
		~PoliceOfficer(){}
		
		// mutator functions
		void setName(string n)
			{name = n;}
		void setBadgeNum(int b)
			{badgeNum = b;}
		string getName()
			{return name;}
		int getBadgeNum()
			{return badgeNum;}
		
};
#endif
// #ifndef PoliceOfficer_H
// #define PoliceOfficer_H
// #include "ParkedCar.h"
// #include "ParkingMeter.h"
// #include "ParkingTicket.h"
//
// class PoliceOfficer {
// 	private:
// 		string name;
// 		int badgeNum;
//
//
// 	public:
// 		PoliceOfficer(){}
// 		~PoliceOfficer(){}
//
// 		// mutator funcions
// 		void setName(string n)
// 			{name = n;}
// 		void setBadgeNum(int b)
// 			{badgeNum = b;}
// 		// accessor functions
// 		string getName()
// 			{return name;}
// 		int getBadgeNum()
// 			{return badgeNum;}
// };
// #endif
