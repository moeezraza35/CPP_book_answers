#include<iostream>
using namespace std;

int main(){
	float num1, num2;	// Initializing 2 variables for floating point numbers
	char op;			// Initializing a variable for operator

	cout << "Enter 1st number: ";	// Prompt
	cin >> num1;					// Input number 1
	cout << "Enter operator: ";		// Prompt
	cin >> op;						// Input operator
	cout << "Enter 2nd number: ";	// Prompt
	cin >> num2;					// Input number 2

	switch (op){	// Using Switch case conditional statements
		case '+':
			cout << num1 + num2 << '\n';	// Printing sum
			break;
		case '-':
			cout << num1 - num2 << '\n';	// Print subtraction
			break;
		case '*':
			cout << num1 * num2 << '\n';	// Printing multiplication
			break;
		case '/':
			cout << num1 / num2 << '\n';	// Printing division
			break;
		default:					// Other case, if user enter wrong operator.
			cout << "Enter a valid operator (+, -, *, /)\n";
			break;
	}
	return 0;
}