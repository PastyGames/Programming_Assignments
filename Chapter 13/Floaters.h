#ifndef FLOATERS_H
#define FLOATERS_H
#include <iostream>
#include <cstring>

using namespace std;

class Numbers {
	private:
		float  * fl;
		int indexx;
	public:
		Numbers(int i)
			{ fl = new float[i];
				indexx = i;
				for(int z = 0; z < i; z++)
					fl[z] = 0;
			}
		~Numbers()
			{ delete [] fl;}
		void store(int index, float num)
			{ fl[index] = num;}
		float retrieve(int index)
			{ return fl[index];}
		float highest();
		float lowest();
		float average();	
};

float Numbers::highest()
{
	float high = fl[0];
	for(int i = 1; i < indexx; i++)
	{
		if(high < fl[i])
		{
			high = fl[i];
		}
	}
	return high;
}

float Numbers::lowest()
{
	float low = fl[0];
	for(int i = 1; i < indexx; i++)
	{
		if (low > fl[i])
		{
			low = fl[i];
		}
	}
	return low;
}

float Numbers::average()
{
	float total = 0.0;
	for(int i = 0; i < indexx; i++)
	{
		total += fl[i];
	}
	total /= indexx;
	return total;
}
#endif
