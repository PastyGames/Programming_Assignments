#ifndef POPULATION_H
#define POPULATION_H
#include <iostream>

class Population {
	private:
		int population;
		int numOfBirths;
		int numOfDeaths;
	public:
	double getBirthRate()
		{return (double)(numOfBirths / population);}
	double getDeathRate()
		{ return (double)(numOfDeaths / population);}
	void setPopulation(int p)
		{ population = p;}
	void setBirths(int b)
		{ numOfBirths = b;}
	void setDeaths(int d)
		{ numOfDeaths = d;}
	double getBirths()
		{ return numOfBirths;}
	double getDeaths()
		{ return numOfDeaths;}
	double getPopulation()
		{ return population;}
};
#endif
