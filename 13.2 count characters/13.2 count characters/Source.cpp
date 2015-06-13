#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string name;
	cout << "Hint-- file name is: \"file\"\n";
	cout << "Enter a file name: ";
	cin >> name;

	ifstream input(name + ".txt");
	if (input.fail()){
		cout << "File does not exist.\n";
		
	}

	int characters = 0;
	
	while (!input.eof()){
		if (isalpha(input.get()))
		characters++;
	}

	cout << "Characters: " << characters << endl;
	return 0;
}