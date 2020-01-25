#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]){
	
	ifstream fin;
	ofstream fout;
	
	// check if there are enough arguments
	int i = 0;
	
	if(argv[i]!=NULL){
		cout << "user provides enough arguments" << endl;
	}
	else{
		cout << "user did not provide enough arguments" << endl;
	}
	
	// open first file
	fin.open("file1.txt");
	
	char c;
	
	if (fin.fail()){
		cerr << " Cannot open the input file!" << endl;
		return 1;
	}

	// opoen second file
	fout.open("file2.txt");
	
	if(fout.fail()){
		cerr << "Cannot open the output file!" << endl;
		return 1;
	
	}
	
	while (fin.get(c)){
		fout << c;
	}

	fin.close();
	fout.close();

	return 0;
}