#include "DAYSMOD.H"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) 
{
	Days day(30, "January");
	for (int i = 0; i < 40; i++) 
	{
		++day;
	}	
}