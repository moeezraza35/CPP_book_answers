#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char *argv[]){
	string argument;	// Storing arguments
	try{				// Using try statement for execeptional handlling
		/* Statements */
		if(argc == 1){		// 1st argument is the file name with path
			throw(argc);
		}else if(string(argv[1]) != "-w" && string(argv[1]) != "-r"){
			throw(argv[1]);	// If there are argument but not valid
		}else{				// Valid argument
			argument = argv[1];
		}
	}catch(int count){		// Error when no argument
		cout << "Missing argument!\n" << count << " arguments are passed\n";
		cout << "-w\tFor Writing\n-r\tFor Reading\n";
		return 1;
	}catch(char *value){	// Error when invalid argument
		cout << "Invalid argument!\n\"" << value << "\" is not recognized\n";
		cout << "-w\tFor Writing\n-r\tFor Reading\n";
		return 1;
	}
	if(argument == "-w"){	// Writing to file
		string text;		// Text to be written
		cout << "Enter text to write\n>";	// Prompt
		cin >> text;						// Input text
		
		ofstream file("./textFile.txt");	// Opening file
		file << text;						// Writing text
		file.close();						// Closing
	}else{					// Reading from file
		string line;
		ifstream file("./textFile.txt");	// Opening file
		while(getline(file, line)){			// Reading line-by-line
			cout << line;					// Printing line
		}
		file.close();						// Closing
	}
	return 0;
}