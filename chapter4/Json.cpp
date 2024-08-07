#include<iostream>
#include<vector>
using namespace std;

class json{
	private:
		vector<string> keys;
		vector<string> values;
	public:
		string &operator[](string key){
			bool exist = false;
			for(int i=0; i<this->keys.size(); i++){
				if(this->keys[i] == key){
					exist = true;
					return values[i];
				}
			}
			try{
				if(!exist){throw key;}
			}catch(string k){
				cout << "Index Error!\n\"" << k << "\"is not a valid key.";
			}
		}
		void set(string k, string v){
			this->keys.push_back(k);
			this->values.push_back(v);
		}
		friend ostream &operator<<(ostream &os, json obj){
			os << '{';
			for (int i=0; i<obj.keys.size(); i++){
				os << '"' << obj.keys[i] << "\" : \"" << obj.values[i] << "\", ";
			}
			os << "\b\b}";
		}
};
int main(){
	json myData;
	string data;

	cout << "Enter name: ";
	cin >> data;
	myData.set("name",data);

	cout << "Enter age: ";
	cin >> data;
	myData.set("Age", data);

	cout << "Enter city: ";
	cin >> data;
	myData.set("City", data);
	
	cout << myData;
	return 0;
}