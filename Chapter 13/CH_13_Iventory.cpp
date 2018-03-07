#include "INVENTORY.H"
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	Inventory item(100, 200, 300);
	item.setItemNumber(-1);
	cout << item.getItemNumber() << endl;
}