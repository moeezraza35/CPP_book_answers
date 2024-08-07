#include<iostream>
using namespace std;

int main(){
	int num;						// Initializing a variable for an integer
	cout << "Enter a number: ";		// Prompt
	cin >> num;						// Input num
	
	for(int i=1; i<=10; i++){		// Using for loop from 1-10
		cout << num << " x " << i << " = " << num*i;	// Printing in a pattern of table
	}
	return 0;
}