//Brandon Cabael
//CSC-160
//lesson 04, page 369, pp 05

#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	ifstream fin;
	fin.open("hw4pr02input.txt");

	if (fin.fail()) {
		cout << "cannot open file advice.txt" << endl;
		exit(1);
	}

	cout << endl << endl << " PROGRAMMING ORACLE" << endl << endl;
	cout << "I will write programming advice to the screen. " << "To repay me for " << endl;
	cout << "sharing my wisdom, you can either" << " remit a large sum of money " << endl;
	cout << "to your instructor, or you can enter" << " another piece of sage programming" << endl;
	cout << "advice for my continued edification. " << endl;
	cout << "Here is your advice: " << endl << endl;
	char c1;
	fin.get(c1);

	while (fin)
	{
		cout << c1;
		fin.get(c1);
	}
	cout << endl << endl;
	cout << "Please enter your advice now. Your advice may be as long" << endl;
	cout << "as you need, but please indicate" << " the end of input" << endl;
	cout << "by pressing enter twice." << endl << endl;
	fin.close();
	ofstream fout;
	fout.open("hw4pr02input.txt");
	int quit = 0;
	char c2;
	cin.get(c1);
	while (!quit)
	{
		fout.put(c1);
		cin.get(c2);
		cin.putback(c2);
		if ('\n' == c1 && '\n' == c2)
			quit = 1; 
		cin.get(c1);
	}
	fout << endl;
	fout.close();
	cout << "Thank you for your advice." << endl;
	system("pause");
	return 0;
}
