#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) 
{
	const int SIZE = 11;
//	string numList[SIZE];
	string numList[] = { "Alejandra Cruz, 555-1223", "Joe Looney, 555-0097", "Geri Palmer, 555-8787",
				"Li Chen, 555-1212", "Holly Gaddis, 555-8878", "Sam Wiggins, 555-0998",
				"Bob Kain, 555-8712", "Tim Haynes, 555-7676", "Warren Gaddis, 555-9037",
				"Jean James, 555-4939", "Ron Palmer, 555-2783"};
	string name;
	cout << "Enter a name to search for, caps sensitive: ";
	cin >> name;
	size_t found;
	for (int i = 0; i < SIZE; i++)
	{
		found = numList[i].find(name);
		if (found != std::string::npos )
			cout << numList[i] << endl;
		 
			
	}
	
}