#include<iostream>
#include<fstream>
using namespace std;

int main(){
	float num1, num2;	// Initializing 2 variables for floating point numbers
	char op;			// Initializing a variable for operator

	cout << "Enter 1st number: ";	// Prompt
	cin >> num1;					// Input number 1
	cout << "Enter operator: ";		// Prompt
	try{
		cin >> op;					// Input operator
		if(op != '+' && op != '-' && op != '*' && op != '/'){
			throw(op);
		}
	}catch(char op){
		cout << "Enter a valid operator (+, -, *, /)\n";
		return 1;	// Stoping the code
	}
	cout << "Enter 2nd number: ";	// Prompt
	cin >> num2;					// Input number 2

	ofstream file("./history.txt", ios::app);

	switch (op){	// Using Switch case conditional statements
		case '+':
			cout << num1 + num2 << '\n';	// Printing sum
			// Writing to file
			file << num1 << ' ' << op << ' ' << num2 << " = " << num1 + num2 << '\n';
			break;
		case '-':
			cout << num1 - num2 << '\n';	// Print subtraction
			// Writing to file
			file << num1 << ' ' << op << ' ' << num2 << " = " << num1 - num2 << '\n';
			break;
		case '*':
			cout << num1 * num2 << '\n';	// Printing multiplication
			// Writing to file
			file << num1 << ' ' << op << ' ' << num2 << " = " << num1 * num2 << '\n';
			break;
		case '/':
			cout << num1 / num2 << '\n';	// Printing division
			// Writing to file
			file << num1 << ' ' << op << ' ' << num2 << " = " << num1 / num2 << '\n';
			break;
	}
	file.close();
	return 0;
}