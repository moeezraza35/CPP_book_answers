#include<iostream>
#include<fstream>
using namespace std;

int main(){
	float obtain_marks, percentage;	// Initialzing variable for floating point number
	int total_marks;				// Total marks without floating point
	string name;					// Candidates names
	
	cout << "Enter name: ";			// Prompt
	cin >> name;					// Input name
	cout << "Enter obtain marks: ";	// Prompt
	cin >> obtain_marks;			// Input obtain marks
	cout << "Enter total marks:";	// Prompt
	cin >> total_marks;				// Input total marks

	percentage = (obtain_marks * 100)/total_marks;	// Calculating percentage

	if(percentage >= 45){	// Using if...else conditional statments
		ofstream file("pass.txt", ios::app);
		file << name << '\n';
		file.close();
		cout << "Pass\n";
	}
	else{
		ofstream file("fail.txt", ios::app);
		file << name << '\n';
		file.close();
		cout << "Fail\n";
	}
	return 0;
}