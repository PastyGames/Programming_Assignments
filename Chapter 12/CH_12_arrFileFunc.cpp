#include <iostream>
#include <fstream>

using namespace std;
//prototypes
void arrayToFile(string, int *, int);
void fileToArray(string, int *, int);

int main(int argc, char *argv[]) 
{
	const int SIZE = 10;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	string filename;
	cout << "What is the name of the file: ";
	cin >> filename;
	
//	arrayToFile(filename, arr, SIZE);
	fileToArray(filename, arr, SIZE);


}
void arrayToFile(string filename, int * ptr, int size)
{
	fstream file;
	file.open(filename, ios::out |ios::binary);
	file.write(reinterpret_cast<char *>(ptr), sizeof(ptr));
	file.close();
}

void fileToArray(string filename, int * ptr, int size)
{
	fstream file;
	file.open(filename, ios::in | ios::binary);
	file.read(reinterpret_cast<char *> (ptr), sizeof(ptr));
	for (int i = 0; i < size; i++)
		cout << ptr[i] << endl;
}