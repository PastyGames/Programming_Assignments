#include "Car.h"
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	Car bugatti(2015, "Bugatti");
	bugatti.accelerate();
	cout << bugatti.getSpeed() << endl;
	bugatti.accelerate();
	cout << bugatti.getSpeed() << endl;
	bugatti.accelerate();
	cout << bugatti.getSpeed() << endl;
	bugatti.accelerate();
	cout << bugatti.getSpeed() << endl;
	bugatti.accelerate();
	cout << bugatti.getSpeed() << endl;
	
	bugatti.brake();
	cout << bugatti.getSpeed() << endl;
	bugatti.brake();
	cout << bugatti.getSpeed() << endl;
	bugatti.brake();
	cout << bugatti.getSpeed() << endl;
	bugatti.brake();
	cout << bugatti.getSpeed() << endl;
	bugatti.brake();
	cout << bugatti.getSpeed() << endl;
}