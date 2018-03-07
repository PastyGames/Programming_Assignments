#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include "PersonData.h"

class CustomerData : public PersonData {
	private:
		int customerNumber;
		bool mailingList;
	public:
		CustomerData()
		{}
		CustomerData(int c, bool m)
		{
			customerNumber = c; mailingList = m;
		}
		// Mutator Functions
		void setMailing(bool m)
			{mailingList = m;}
		void setCustomerNum(int c)
			{customerNumber = c;}
		// Accessor Functions
		int getCustomerNum()
			{return customerNumber;}
		bool getMailing()
			{return mailingList;}
		
};
#endif