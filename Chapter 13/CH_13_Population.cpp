#include "POPULATION.H"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) 
{
	Population people;
	int temp;
	
	cout << "Enter  the population: ";
	cin >> temp;
	people.setPopulation(temp);
	while (people.getPopulation() < 0)
	{
		cout << "Error, try again: ";
		cin >> temp;
		people.setPopulation(temp);
	}
	
	cout << "Enter the number of deaths: ";
	cin >> temp;
	people.setDeaths(temp);
	while (people.getDeaths() < 0)
	{
		cout << "Error, try again: ";
		cin >> temp;
		people.setDeaths(temp);
	}
	
	cout << "Enter the number of births: ";
	cin >> temp;
	people.setBirths(temp);
	while (people.getBirths() < 0)
	{
		cout << "Error, try again: ";
		cin >> temp;
		people.setBirths(temp);
	}
	
	cout << "The birth rate is: " << people.getBirths() << "%" << endl;
	cout << "The death rate is: " << people.getDeaths() << "%" << endl;
}