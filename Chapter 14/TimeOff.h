#ifndef TIMEOFF_H
#define TIMEOFF_H
#include "NUMDAYS.H"

class TimeOff {
	private:
		NumDays maxSickDays;
		NumDays sickTaken;
		NumDays maxVacation;
		NumDays vacTaken;
		NumDays maxUnpaid;
		NumDays unpaidTaken;
		string name;
		string idNum;
	public:
		TimeOff()
		{}
		TimeOff(string n, string i)
		{
			name = n;
			idNum = i;
			maxSickDays.setHours(0);
			sickTaken.setHours(0);
			maxVacation.setHours(0);
			vacTaken.setHours(0);
			unpaidTaken.setHours(0);
			maxUnpaid.setHours(240);
		}
		void setName(string n)
			{name = n;}
		void setId(string i)
			{idNum = i;}
		string getName()
			{return name;}
		string getId()
			{return idNum;}
		void setSickTaken(double s)
		{
			sickTaken.setHours(s);
		}
		void setMaxVaction(double s)
		{
			maxVacation.setHours(s);
		}
		void setVacTaken(double s)
		{
			vacTaken.setHours(s);
		}
		void setMaxUnpaid(double s)
		{
				maxUnpaid.setHours(s);
		}
		void setUnpaidTaken(double s)
		{
			if(s > maxUnpaid.getHours())
				unpaidTaken.setHours(240);
			else
				unpaidTaken.setHours(s);
		}
		double getMaxSickDays()
			{return maxSickDays.getHours();}
		double getSickTaken()
			{return sickTaken.getHours();}
		double getMaxVacation()
			{return maxVacation.getHours();}
		double getVacTaken()
			{return vacTaken.getHours();}
		double getMaxUnpaid()
			{return maxUnpaid.getHours();}
		double getUnpaidTaken()
			{return unpaidTaken.getHours();}
};
#endif