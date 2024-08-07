#include<iostream>
#include<ctime>
#include<windows.h>
using namespace std;

int main(){
	time_t datetime;	// Initializing time_t object
	tm timeValues;		// Struct "tm" for key-values
	
	while(true){		// Continues loop until user want
		system("cls");	// Clearing screen (Use "clear" in Linux or Mac)
		time(&datetime);					// Getting current time
		timeValues = *localtime(&datetime);	// Converting to struct

		// Printing Values in a pattern
		cout << "Clock\nDate: ";
		cout << timeValues.tm_mday << '/' << timeValues.tm_mon << '/' << timeValues.tm_year << '\n';
		cout << timeValues.tm_hour << ':' << timeValues.tm_min << ':' << timeValues.tm_sec << '\n';
		cout << "Press CTRL + C to exit\n";
		Sleep(100);	// delay for 100 milliseconds for better performance
	}
	return 0;
}