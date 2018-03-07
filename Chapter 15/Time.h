#ifndef TIME_H
#define TIME_H

class Time {
	protected:
		int hour;
		int min;
		int sec;
	public:
		// Default Constructor
		Time() 
			{ hour = 0; min = 0; sec = 0;}
		// Constructor
		Time(int h, int m, int s)
			{hour = h; min = m; sec = s;}
		// accessor function
		int getHour() const
			{return hour;}
		int getMin() const
			{return min;}
		int getSec() const
			{return sec;}
};
#endif