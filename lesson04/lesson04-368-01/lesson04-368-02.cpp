#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string filename;
	int numberCount = 0;
	double total, mean;

	ifstream in_stream;

	total = 0;

	cout << "Enter a filename." << endl;
	cin >> filename;
	in_stream.open(filename);
	
	if (in_stream.is_open()) {
		double tempHolder;
		do {
			numberCount++;
			in_stream >> tempHolder;
			total += tempHolder;

		} while (in_stream.eof());

		mean = total / numberCount;

		cout << "The average of " << numberCount << " numbers is " << mean << "." << endl;
	}
	system("pause");
	return 0;

}