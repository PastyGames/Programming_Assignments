#include "NUMDAYS.H"

using namespace std;

int main(int argc, char *argv[]) 
{
	NumDays days(20.0);
	days--;
	cout << days.getHours() << endl;
	days++;
	cout << days.getHours() << endl;
	--days;
	--days;
	++days;
	days++;
	cout << days.getHours() << endl;
}