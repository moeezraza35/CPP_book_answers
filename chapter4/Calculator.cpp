#include<iostream>
using namespace std;

class calculator{	// Calculator class
	private:
		float num1, num2;	// Two required numbers
	public:
		calculator(float n1, float n2){	// Constructor for getting both
			this->num1 = n1;
			this->num2 = n2;
		};
		float sum(){	// Sum function
			return num1 + num2;
		}
		float sub(){	// Subtraction function
			return num1 - num2;
		}
		float mul(){	// Multiplication function
			return num1 * num2;
		}
		float div(){	// Division function
			return num1 / num2;
		}
};
int main(){
	float num1, num2;	// Initializing 2 variables for floating point numbers
	char op;			// Initializing a variable for operator

	cout << "Enter 1st number: ";	// Prompt
	cin >> num1;					// Input number 1
	cout << "Enter operator: ";		// Prompt
	cin >> op;						// Input operator
	cout << "Enter 2nd number: ";	// Prompt
	cin >> num2;					// Input number 2

	calculator myCalc(num1, num2);	// Creating class-object

	switch (op){	// Using Switch case conditional statements
		case '+':
			cout << myCalc.sum() << '\n';	// Printing sum
			break;
		case '-':
			cout << myCalc.sub() << '\n';	// Print subtraction
			break;
		case '*':
			cout << myCalc.mul() << '\n';	// Printing multiplication
			break;
		case '/':
			cout << myCalc.div() << '\n';	// Printing division
			break;
		default:					// Other case, if user enter wrong operator.
			cout << "Enter a valid operator (+, -, *, /)\n";
			break;
	}
}