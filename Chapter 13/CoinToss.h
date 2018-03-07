#ifndef COINTOSS_H
#define COINTOSS_H
#include <cstdlib>
#include <string> 
#include <ctime>

using namespace std;


class Coin {
	private:
		string sideUp;
	public:
		Coin()
		{ 
			int random;
			srand(time(0));
			random = rand() % 6 + 1;
			if(random <= 3)
				sideUp = "heads";
			else if(random <= 6 && random > 3)
				sideUp = "tails";
			
		}
		void toss()
		{
			int random;
			random = rand() % 6 + 1;
			if(random <= 3)
				sideUp = "heads";
			else if(random <= 6 && random > 3)
				sideUp = "tails";
		}
		string getSideUp()
			{ return sideUp;}
		void setSideUp()
			{ sideUp = "";}
};
#endif