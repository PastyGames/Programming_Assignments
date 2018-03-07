#include <iostream>
#include <string>

using namespace std;

struct MovieData
{
	string title;
	string director;
	int yearReleased;
	int runningTime;
	int cost;
	int firstRevenues;
};

void display(MovieData);


int main(int argc, char *argv[]) 
{
	MovieData movie1 = {"Hannah Montana", "Miley Cyrus", 2012, 130, 10000, 20000};
	MovieData movie2 = {"Harry Potter", "J.K. Rowling", 2005, 200, 20000, 10000};
	
	display(movie1);
	display(movie2);
	
}
void display(MovieData movie)
{
	cout << "The movie title: " << movie.title << endl;
	cout << "The director: " << movie.director << endl;
	cout << "The year released: " << movie.yearReleased << endl;
	cout << "The length of the movie: " << movie.runningTime << endl;
	cout << "The profit or loss: " << movie.firstRevenues - movie.cost << endl;
	cout << endl;
}