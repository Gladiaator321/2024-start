#include <iostream>
#include <iomanip>
#include "Windows.h"
//#include <unistd.h>			//for UNIX or Linux
using namespace std;
int main()
{
	int seconds=0,hours=0, minutes=0,Days=0;
	double i = 0;
	while (i < 100000000000000) { //if you do i+=0.1,cycle would work for 11574074074,074 days
		seconds++;
		if (seconds ==60) { minutes++;seconds = 0; };
		if (minutes == 60) { hours++;minutes = 0; };
		if (hours == 24) { Days++;hours = 0; };
		if (Days != 0) cout << "Days: "<<setw(5) << Days;
		cout<< setw(2) << hours << ":" << setw(2) << minutes << " :" << setw(2) << seconds << endl;
		Sleep(1000);//every second
	}
	return 0;
}