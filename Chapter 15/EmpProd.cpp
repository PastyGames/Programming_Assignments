#include "ProductionWorker.h"
#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) 
{
	ProductionWorker worker(1, 9.50);
	
	worker.setName("Donald");
	worker.setEmp(98765);
	worker.setHire("09122016");
	
	string word = worker.getHire();
	char arr[8];
	for(int i = 0; i < 8; i++)
	{
		if (i == 2 || i == 5)
			arr[i] = '/';
		else
			arr[i] = word[i];
	}	
	for (int j = 0; j < 8; j++)
		cout << arr[j];
	
}