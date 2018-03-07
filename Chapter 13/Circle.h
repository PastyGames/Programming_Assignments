#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>

using namespace std;

class Circle {
	private:
		double radius;
		const double PI;
	public: 
		Circle() : PI(3.14159)
			{radius = 0;}
		Circle(double r) : PI(3.14159)
			{ radius = r;}
		void setRadius(double r)
			{ radius = r;}
		double getRadius() const
			{ return radius;}
		double getArea()
			{ return (PI * radius * radius);}
		double getDiameter()
			{ return (radius * 2);}
		double getCircumference()
			{ return (radius * 2 * PI);}
};
#endif