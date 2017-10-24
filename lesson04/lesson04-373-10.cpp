//Brandon Cabael
//CSC-160
//Lesson 04, page 373, pp 10

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {

	ifstream fin;

	const int number_of_names = 1000;

	string name;
	int count;
	bool found_boy = false;
	bool found_girl = false;

	cout << "Please enter a name (Capitalize first letter): ";
	cin >> name;

	fin.open("babynames2012.txt");

	if (fin.fail()) {
		cout << "Error opening file needed...";
		system("pause");
		exit(1);
	}

	for (count = 0; count < number_of_names; count++) {
		int rank;
		string boy, girl;
		fin >> rank >> boy >> girl;

		if (name == boy) {
			found_boy = true;
			cout << name << " is ranked " << rank << " out of 1000 for boys names." << endl;
		}

		if (name == girl) {
			found_girl = true;
			cout << name << " is ranked " << rank << " out of 1000 for girls names." << endl;
		}
	}

	if (!found_boy) {
		cout << name << " is not ranked in the top 1000 names for boys." << endl;
	}

	if (!found_girl) {
		cout << name << " is not ranked in the top 1000 names for girls." << endl;
	}

	fin.close();
	system("pause");
	return 0;
}