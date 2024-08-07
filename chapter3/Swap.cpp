#include<iostream>
using namespace std;

void swap(int &n1, int &n2){
	int n3 = n1;	// Creating a new variable to hold n1 value
	n1 = n2;		// Assigning n1, n2's value
	n2 = n3;		// Assigning n2, n3's value (old value of n1)
}

void swap(float &n1, float &n2){	// Function overloading and making for float type
	float n3 = n1;
	n1 = n2;
	n2 = n3;
}

void swap(char &c1, char &c2){		// Function overloading and making for char type
	char c3 = c1;
	c1 = c2;
	c2 = c3;
}

int main(){
	int num1 = 5, num2 = 10;	// Initializing 2 variables and assigning random values
	cout << "n1 = " << num1 << " and n2 = " << num2 << '\n';	// Initial values
	
	swap(num1, num2);	// calling swap

	cout << "n1 = " << num1 << " and n2 = " << num2 << '\n';	// Final values
	return 0;
}