#ifndef ParkingMeter_H
#define ParkingMeter_H

class ParkingMeter {
	
	private:
		double minsPurchased;
		
	public:
		ParkingMeter(){}
		~ParkingMeter(){}
		
		void setMinsPurchased(double m)
			{minsPurchased = m;}
		double getMinsPurchased()
			{return minsPurchased;}
	
};
#endif