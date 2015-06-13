#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string year;
	string name;
	char gender;

	cout << "Enter a name: ";
	cin >> name;
	name.at(0) = toupper(name.at(0));

	do {
		cout << "Enter gender (m/f): ";
		cin >> gender;
	} while (gender != 'm' && gender != 'f');

	cout << "Enter the year you would like to check: ";
	cin >> year;

	
	string filename = "babynameranking" + year + ".txt";

	fstream babynames(filename, ios::beg | ios::in);
	if (babynames.fail()){
		cout << "Error opening files\n";
		return 0;
	}

	string rank;
	string tempname_boy;
	string tempname_girl;
	string wasted_stuff;

	if (gender == 'm' || gender == 'M'){
		while (!babynames.eof())
		{
			babynames >> rank >> tempname_boy >> tempname_girl >> wasted_stuff;
			
			if (name == tempname_boy)
			{
				cout << "The rank for " << name << " is " << rank << endl;
			}
		}
	}

	if (gender == 'f' || gender == 'F'){
		while (!babynames.eof())
		{
			babynames >> rank >> tempname_boy >> tempname_girl >> wasted_stuff;
			
			if (name == tempname_girl)
			{
				cout << "The rank for " << name << " is " << rank << endl;
				return 0;
			}
		}
	}


}