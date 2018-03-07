#ifndef RETAILITEM_H
#define RETAILITEM_H
#include <string>

using namespace std;

class RetailItem {
	private: 	
		string description;
		int unitsOnHand;
		double price;
	public: 
		RetailItem(string d,int u, double p)
		{
			description = d;
			unitsOnHand = u;
			price = p;
		}
		void setDescription(string d)
		{ description = d; }
		void setUnits(int u)
		{ unitsOnHand = u;}
		void setPrice(double p)
		{ price = p; }
		string getDescription()
		{ return description; }
		int getUnits()
		{ return unitsOnHand; }
		double getPrice()
		{ return price; }
};
#endif