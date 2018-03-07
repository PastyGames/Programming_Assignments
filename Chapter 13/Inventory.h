#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
#include <string>

using namespace std;

class Inventory {
	private:
		int itemNum;
		int quantity;
		double cost;
		double totalCost;
	public:
		Inventory()
		{
			itemNum = 0;
			quantity = 0;
			cost = 0;
			totalCost = 0;
		}
		Inventory(int i, int q, double c)
		{
			itemNum = i;
			quantity = q;
			cost = c;
		}
		void setItemNumber(int i)
		{ 
			while (i < 0)
			{
				cout << "Cant accept below 0, try again: ";
				cin >> i;
			}
			itemNum = i;
		}
		
		void setQuantity(int q)
		{ 
			while (q < 0)
			{
				cout << "Cant accept below 0, try again: ";
				cin >> q;
			}
			quantity = q;
		}
		
		void setCost(double c)
		{ 
			while (c < 0)
			{
				cout << "Cant accept below 0, try again: ";
				cin >> c;
			}
			cost = c;
		}
		
		void setTotalCost(double t)
		{ totalCost = t;}
		
		int getItemNumber()
		{ return itemNum;}
		
		int getQuantity()
		{ return quantity;}
		
		double getCost()
		{ return cost;}
		
		double getTotalCost()
		{ return totalCost;}
};
#endif