#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
	private:
		double monthBonus;
		double reqTrain;
		double trained;
		
	public:
		TeamLeader(double m, double r, double t, int s, double p) : ProductionWorker(s, p)
		{
			monthBonus = m;
			reqTrain = r;
			trained = t;
		}
		double getMonth()
			{return monthBonus;}
		double getReqTrain()
			{return reqTrain;}
		double getTrained()
			{return trained;}
		void setMonth(double m)
			{monthBonus = m;}
		void setReqTrain(double r)
			{reqTrain = r;}
		void setTrained(double t)
			{trained = t;}
};
#endif