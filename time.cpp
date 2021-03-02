#include <iostream>
#include <ctime>
using namespace std;

int main ()
{
	time_t tim;
	tm *ptr;

	int y , m , d ;
    cout<<"Enter the year ,month and date respectively :";
    cin>>y>>m>>d;
	char weekday[7][20] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	
	time(&tim);
	ptr = localtime(&tim);

	// tm_year is time since 1900
	ptr->tm_year = y - 1900;
	ptr->tm_mon = m - 1;
	ptr->tm_mday = d;
	
	mktime (ptr);
	cout << " On "<<m<<" , "<<d<<" , "<<y<<" "<< weekday[ptr->tm_wday];
	
	return 0;
}