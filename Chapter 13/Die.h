#ifndef DIE_H
#define DIE_H
#include <cstdlib>
#include <ctime>

class Die {
	private:
		int sides;
		int value;
	public:
		Die(int = 6);
		void roll();
		int getSides();
		int getValue();
};
Die::Die(int numSides)
{
	unsigned seed = time(0);
	srand(seed);
	sides = numSides;
	roll();
}

void Die::roll()
{
	const int MIN_VALUE = 1;
	value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}

int Die::getSides()
{
	return sides;
}

int Die::getValue()
{
	return value;
}
#endif

