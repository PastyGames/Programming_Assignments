#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) 
{
	fstream file;
	string filename;
	char arr [100];
	char ch;
	cout << "Enter the filename: ";
	cin >> filename;
	file.open(filename, ios::in);
	file.read(arr, sizeof(arr));
	file.close();
	
	for (int i = 0; i < sizeof(arr); i++)
	{
			ch = arr[i];
			ch += 10;
			arr[i] = ch;
				
		
	}
	cout << "Enter the encrypted filename: ";
	cin >> filename;
	file.open(filename, ios::out);
	file.write(arr, sizeof(arr));
	file.close();
	
	file.open(filename, ios::in);
	file.read(arr, sizeof(arr));
	file.close();
	for (int k = 0; k < sizeof(arr); k++) 
	{
		ch = arr[k];
		ch -= 10;
		arr[k] = ch;
		cout << arr[k];
	}
		
}