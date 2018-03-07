#ifndef CAR_H
#define CAR_H
#include <string>

using namespace std;

class Car {
	private:
		int yearModel;
		string make;
		int speed;
	public:
		Car(int y, string m)
		{	
			yearModel = y;
			make = m;
			speed = 0;
		}
		int getYear()
		{
			return yearModel;
		}
		string getMake()
		{
			return make;
		}
		int getSpeed()
		{
			return speed;
		}
		void accelerate()
		{
			speed += 5;
		}
		void brake()
		{
			speed -= 5;
		}
	};
#endif