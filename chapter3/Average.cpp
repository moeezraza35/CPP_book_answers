#include<iostream>
#include<vector>
using namespace std;

bool assign(vector<float> &ns, float n){	// Function for preventing 0 to be enter
	if (n != 0){
		ns.push_back(n);	// Assigning value
		return true;
	} else {
		return false;
	}
}

int main(){
	cout << "Enter numbers to calculate average\nEnter (0) for end\n";	// Prompt
	float num;	// variable to manage user input
	vector<float> numbers;	// Vector which stores all the values

	do{		// do while loop is used so that it runs initialy then condition is check
		cout << ">";
		cin >> num;
	}while(assign(numbers, num));	// Assigning a value and geting the situation
	
	float sum = 0.0;				// variable sum that stores 0.0 initialy
	int total = numbers.size();		// Size of vector is the total number of items

	for(int i=0; i<total; i++){		// Calculating sum using for loop
		sum += numbers[i];
	}
	float average = sum/total;		// Calculating average
	cout << average << '\n';		// Final result
	return 0;
}