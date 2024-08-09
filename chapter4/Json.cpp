#include<iostream>
#include<vector>
using namespace std;

class json{		// JSON class
	private:
		vector<string> keys;	// Vector for keys
		vector<string> values;	// Vector for values
	public:
		string &operator[](string key){	// Overloading "[]" operator
		// Using reference so that value can be changeable
			bool exist = false;			// is record exist that is bing search

			// For loop to iterate the vector keys to find the value
			for(int i=0; i<this->keys.size(); i++){
				if(this->keys[i] == key){
					exist = true;		// Returning value and setting exist to true
					return values[i];
				}
			}
			try{
				if(!exist){throw key;}	// if key is invalid
			}catch(string k){
				// Error message will be shown
				cout << "Index Error!\n\"" << k << "\"is not a valid key.";
			}
		}
		void set(string k, string v){	// Setting a new key-value
			this->keys.push_back(k);	// Adding new key
			this->values.push_back(v);	// Adding new value
		}
		friend ostream &operator<<(ostream &os, json obj){	// overloading for making printable
			os << '{';	// Opening bracket initialy
			// Iterating all the keys and values to print in a pattern
			for (int i=0; i<obj.keys.size(); i++){
				os << '"' << obj.keys[i] << "\" : \"" << obj.values[i] << "\", ";
			}
			os << "\b\b}";	// Removing last ", " and at the end of last item
		}
};
int main(){
	json myData;	// Creating object
	string data;	// string for getting inputs from user

	cout << "Enter name: ";		// Prompt
	cin >> data;				// Input
	myData.set("name",data);	// Setting name

	cout << "Enter age: ";		// Promt
	cin >> data;				// Input
	myData.set("Age", data);	// Setting age

	cout << "Enter city: ";		// Prompt
	cin >> data;				// Input
	myData.set("City", data);	// Setting city
	
	cout << myData;		// Storing data in key-values
	return 0;
}