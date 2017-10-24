//Brandon Cabael
//CSC-160
//lesson 04, page 368, pp 2
//Take int values from a file, count the number of numbers, and display the average

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
	char file_name[17];
	double next, sum = 0, average;
	int count = 0;
	ifstream fin;

	cout << "Enter a file name. 16 characters or less please." << endl;

	cin >> file_name;

	fin.open(file_name);

	if (fin.fail()) {
		cout << "Error opening file " << file_name << endl;
		system("pause");
		exit(1);
	}

	while (fin >> next) {
		fin >> next;
		sum = sum + next;
		count++;
	}

	average = sum / count;

	cout << "The average of " << count << " numbers is " << average << "." << endl;

	system("pause");
	return 0;
}