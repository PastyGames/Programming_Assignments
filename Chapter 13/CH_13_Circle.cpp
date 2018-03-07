#include "CIRCLE.H"
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	Circle circ(10);
	
	cout << "\t\tInfo on the Circle" << endl;
	cout << "Radius: " << circ.getRadius() << endl;
	cout << "Area: " << circ.getArea() << endl;
	cout << "Diameter: " << circ.getDiameter() << endl;
	cout << "Circumference: " << circ.getCircumference() << endl;
}