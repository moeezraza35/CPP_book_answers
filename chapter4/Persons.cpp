#include<iostream>
using namespace std;

class person{
	protected:
		string name;
		int age;
	public:
		person(string name, int age){
			this->name = name;
			this->age = age;
		}
};
class student : public person{
	private:
		string section;
	public:
		student(string name, int age, string section) : person(name,age){
			this->section = section;
		}
};
class teacher : public person{
	private:
		string subject;
	public:
		teacher(string name, int age, string subject) : person(name,age){
			this->subject = subject;
		}
};
int main(){
	int option;
	cout << "(1) Add Student\t(2) Add Teacher\n(3) Add other person\nOption: ";
	cin >> option;

	string n, s;
	int a;
	
	cout << "Enter name: ";
	cin >> n;
	cout << "Enter age: ";
	cin >> a;

	switch (option){
		case 1:{
			cout << "Enter section: ";
			cin >> s;
			student new_student(n,a,s);
			break;
		}
		case 2:{
			cout << "Enter subject: ";
			cin >> s;
			teacher new_teacher(n,a,s);
			break;
		}
		case 3:{
			person new_person(n,a);
			break;
		}
	}
	return 0;
}