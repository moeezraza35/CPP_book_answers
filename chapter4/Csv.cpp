#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

class csv{
	public:
		vector<vector<string>> data;
		csv(ifstream &file, char delimeter=','){
			string line, item;
			vector<string> row;
			while(getline(file, line)){
				for(char letter : line){
					if(letter != delimeter){
						item += letter;
					} else {
						row.push_back(item);
						item = "";
					}
				}
				row.push_back(item);
				item = "";
				data.push_back(row);
				row = {};
			}
		}
};

int main(){
	ifstream file("file.csv");
	csv CSVFile(file, ',');
	for(int i=0; i<CSVFile.data.size(); i++){
		for(int j=0; j<CSVFile.data[i].size(); j++){
			cout << CSVFile.data[i][j] << '\t';
		}
		cout << '\n';
	}
	return 0;
}