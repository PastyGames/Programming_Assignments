#include <iostream>
#include "PERSONAL.H"

using namespace std;
int main(int argc, char *argv[]) 
{
	Personal Me;
	Personal Friend;
	Personal Mikayla;
	Me.setName("Demauri");
	Me.setAddress("1925 Dry Willow Lane");
	Me.setAge(22);
	Me.setPhone("916-549-8803");
	
	cout << "My Info" << endl;
	cout << Me.getName() << endl;
	cout << Me.getAddress() << endl;
	cout << Me.getAge() << endl;
	cout << Me.getPhone() << endl;
}