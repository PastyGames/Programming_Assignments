#include <iostream>
#include <cctype>

using namespace std;
// prototype
void theDate(char *);

int main(int argc, char *argv[]) 
{
	const int NUM_CHARS = 11;
	char date [NUM_CHARS];
	char * formalDate = nullptr;
	cout << "Enter a date in the form of mm/dd/yyyy : ";
	cin >> date;
	
//	formalDate = theDate(date);
	cout << "The date is: ";
	theDate(date);
//	for (int i = 0; i < strlen(formalDate); i++)
//	{
//		cout << formalDate[i];
//	}
}

void theDate(char * idk)
{
	int dd = ((idk[0] - '0') * 10) + (idk[1] - '0');
	int mm = ((idk[3] -'0') * 10) + (idk[4] - '0');
	int year = ((idk[6] - '0') * 1000) + ((idk[7] - '0') * 100) + ((idk[8] - '0') * 10) + (idk[9] - '0');
//	int numHolder;
//	char temp [50];
//	char temp2[50];
//	char theDate[50];
//	char * ptr = nullptr;
//	ptr = new char[50];
//	strncat(temp, idk, 2);
//	numHolder = atoi(temp);
	
	switch (dd) {
		case 1:
			cout << "January " << mm << ", " << year;
			break;
		case 2:
			cout << "Febuary " << mm << ", " << year;
			break;
		case 3:
			cout << "March " << mm << ", " << year;			break;
		case 4:
			cout << "April " << mm << ", " << year;			break;
		case 5:
			cout << "May " << mm << ", " << year;
			break;
		case 6:
			cout << "June " << mm << ", " << year;
			break;
		case 7:
			cout << "July " << mm << ", " << year;
			break;
		case 8: 
			cout << "August " << mm << ", " << year;
			break;
		case 9:
			cout << "September " << mm << ", " << year;
			break;
		case 10:
			cout << "October " << mm << ", " << year;
			break;
		case 11:
			cout << "November " << mm << ", " << year;
			break;
		case 12:
			cout << "December " << mm << ", " << year;
			break;
		default:
			cout << "wtf!!!!";
	}
	
//	for (int i = 3; i < 5; i++ )
//	{
//		int zero = 0;
//		char holder = idk[i];
//		temp2[zero] = holder;
//		++zero;
//		cout << holder << endl;
//		
//	}
//	
//	temp[2] = ',';
//	temp[3] = 32;
//	strcat(theDate, temp);
//	
//	for (int z = 6; z <= 9; z++)
//	{
//		int zero = 0;
//		temp[zero] = idk[z];
//		++zero;
//	}
//	strcat(theDate, temp);
//	for (int k = 0; k < strlen(theDate); k++)
//	{
//		ptr[k] = theDate[k];
//	}
//	return ptr;
	
}