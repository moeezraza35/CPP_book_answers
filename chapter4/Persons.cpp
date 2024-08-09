#include<iostream>
using namespace std;

class person{		// Person class
	protected:
		string name;
		int age;
	public:
		person(string name, int age){	// Constructor
			this->name = name;			// Getting name
			this->age = age;			// Getting age
		}
};
class student : public person{	// student class inherting person class
	private:
		string section;			// Adding sections extra
	public:
		// Constructor inhertance
		student(string name, int age, string section) : person(name,age){
			this->section = section;
		}
};
class teacher : public person{	// teacher class inherting person class
	private:
		string subject;			// Adding subject extra
	public:
		// Constructor inheritance
		teacher(string name, int age, string subject) : person(name,age){
			this->subject = subject;
		}
};
int main(){
	int option;
	// Prompt
	cout << "(1) Add Student\t(2) Add Teacher\n(3) Add other person\nOption: ";
	cin >> option;	// Input

	string n, s;	// Name and section/subject
	int a;			// Age
	
	cout << "Enter name: ";	// Prompt
	cin >> n;				// Input
	cout << "Enter age: ";	// Prompt
	cin >> a;				// Input

	switch (option){		// conditional statement
		case 1:{			// Using {} to avoid scope issue
			cout << "Enter section: ";
			cin >> s;
			student new_student(n,a,s);	// Creating object
			break;
		}
		case 2:{
			cout << "Enter subject: ";
			cin >> s;
			teacher new_teacher(n,a,s);	// Creating object
			break;
		}
		case 3:{
			person new_person(n,a);		// Creating object
			break;
		}
	}
	return 0;
}