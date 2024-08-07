#include<iostream>
using namespace std;

int main(){
	int num;						// Initializing a variable for integer
	cout << "Enter a number: ";		// Prompt
	cin >> num;						// Input

	for(int y=1; y<=num; y++){		// Pattern 1
		for(int x=1; x<=y; x++){
			cout << '*';
		}
		cout << '\n';
	}
	system("pause");	// Only works in Windows OS

	for(int y=num; y>=1; y--){		// Pattern 2
		for(int x=1; x<=y; x++){
			cout << '*';
		}
		cout << '\n';
	}
	system("pause");	// Only works in Windows OS

	for(int y=1; y<=num; y++){		// Pattern 3
		for(int x=num; x>=1; x--){
			if(x>y){
				cout << ' ';
			}else{
				cout << '*';
			}
		}
		cout << '\n';
	}
	system("pause");	// Only works in Windows OS
	
	for(int y=num; y>=1; y--){		// Pattern 4
		for(int x=num; x>=1; x--){
			if(x>y){
				cout << ' ';
			}else{
				cout << '*';
			}
		}
		cout << '\n';
	}
	return 0;
}