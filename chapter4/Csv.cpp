#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

class csv{		// CSV class
	public:
		vector<vector<string>> data;	// 2D vector of string
		csv(ifstream &file, char delimeter=','){	// Constructor
			// CSV file which is opened and delimeter is the character which separates the values

			string line, item;	// Strings for geting data into whole line and dividing into item
			vector<string> row;	// Initial row created to insert into "data"
			
			while(getline(file, line)){			// While loop to get each line
				for(char letter : line){		// For loop to divide line into items
					if(letter != delimeter){
						item += letter;			// Adding character to item if not delimeter
					} else {
						row.push_back(item);	// If delimeter then item pushed to row
						item = "";				// Reseting item
					}
				}
				row.push_back(item);	// Pushing last item to row
				item = "";				// Reseting item		
				data.push_back(row);	// pushing whole row into data
				row = {};				// Reseting row
			}
		}
};

int main(){
	ifstream file("file.csv");	// Opening a CSV file
	csv CSVFile(file, ',');		// Creating object of class csv

	for(int i=0; i<CSVFile.data.size(); i++){			// iterating rows
		for(int j=0; j<CSVFile.data[i].size(); j++){	// iterating each item
			cout << CSVFile.data[i][j] << '\t';			// Printing each item in pattern
		}
		cout << '\n';			// New line character after each row
	}
	return 0;
}