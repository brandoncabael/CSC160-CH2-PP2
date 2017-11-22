#include <iostream>
#include "Student.h"
#include "StudentException.h"
using namespace std;

int main() {
	
	cout << "Testing the Handling of Student Exceptions\n\n";
	
	try {
	    Student testStudent1("S0000001"), testStudent2("S0000002"),testStudent3("S0000003");
	    cout << "Declaration of Student Class Objects Worked Fine\n\n";
	    testStudent1.enroll("CSC-160-500");
        testStudent2.enroll("CSC-161-500");
        testStudent3.enroll("PHI-112-500");
        cout << "Calls to Enroll Member Function Worked Fine\n\n";
        cout << "End of Student Exception Handling Testing";
	}
	catch (StudentException error) {
	    cout << error.errorMessage();
	}
	catch (...) {
	    cout << "Unknown error, please try again later...";
	}
}
