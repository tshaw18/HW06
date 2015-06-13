#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

int main(){
	srand(time(NULL));
	// Input to Exercise13_1.txt
	ofstream fout;
	fout.open("Exercise13_1.txt");

	if (fout.fail()){
		cout << "Can't open file for writing\n";
		return 0;
	}
	for (int i = 0; i < 100; i++) {
		fout << "Number " << rand() % 101 << endl;
	}

	fout.close();
}