//Brandon Cabael
//CSC160
//Lesson 5, Page 617, PP 11

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Movie {
	string name, mpaa;
	int terrible, bad, ok, good, great;
	double rating1, rating2, rating3, rating4, rating5, average;
public:

	Movie(string, string);

	string getName() {
		return(name);
	}

	string setName(string) {}

	string getMPAA() {
		return(mpaa);
	}

	string setMPAA(string) {}

	void addRating(int a, int b, int c, int d, int e) {
		int x;
		rating1 = a;
		rating2 = b;
		rating3 = c;
		rating4 = d;
		rating5 = e;
		
		for (x = 1; x < 6; x++) {
			if (rating1 == x) {
				if (x == 1) {
					terrible++;
				}
				if (x == 2) {
					bad++;
				}
				if (x == 3) {
					ok++;
				}
				if (x == 4) {
					good++;
				}
				if (x == 5) {
					great++;
				}
			}

			if (rating2 == x) {
				if (x == 1) {
					terrible++;
				}
				if (x == 2) {
					bad++;
				}
				if (x == 3) {
					ok++;
				}
				if (x == 4) {
					good++;
				}
				if (x == 5) {
					great++;
				}
			}

			if (rating3 == x) {
				if (x == 1) {
					terrible++;
				}
				if (x == 2) {
					bad++;
				}
				if (x == 3) {
					ok++;
				}
				if (x == 4) {
					good++;
				}
				if (x == 5) {
					great++;
				}
			}

			if (rating4 == x) {
				if (x == 1) {
					terrible++;
				}
				if (x == 2) {
					bad++;
				}
				if (x == 3) {
					ok++;
				}
				if (x == 4) {
					good++;
				}
				if (x == 5) {
					great++;
				}
			}

			if (rating5 == x) {
				if (x == 1) {
					terrible++;
				}
				if (x == 2) {
					bad++;
				}
				if (x == 3) {
					ok++;
				}
				if (x == 4) {
					good++;
				}
				if (x == 5) {
					great++;
				}
			}
		}
	}

	double getAverage() {
		average = ((rating1 + rating2 + rating3 + rating4 + rating5) / 5);
		return(average);
	}


	
};

Movie::Movie(string a, string b) {
	name = a;
	mpaa = b;
}

int main() {
	Movie movie1("The Adjustment Bureau", "PG-13");
	Movie movie2("I Am Number Four", "PG-13");

	movie1.addRating(5, 5, 4, 4, 5);
	movie2.addRating(5, 1, 3, 2, 1);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout << movie1.getName() << " , " << movie1.getMPAA() << " , Average Rating: " << setprecision(1) << movie1.getAverage() << endl;
	cout << movie2.getName() << " , " << movie2.getMPAA() << " , Average Rating: " << setprecision(1) << movie2.getAverage() << endl;

	system("pause");
	return 0;
}