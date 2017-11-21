#include "rational.h"

using namespace std;

int main()
{
    Rational test1, test2(10), test3(1, 2);


    // Display the three values to test cout
    cout << "\nTest1 equals " << test1;
    cout << "\nTest2 equals " << test2;
    cout << "\nTest3 equals " << test3;
    // Test our operators
    cout << "\nTest1 * Test2 equals " << test1*test2;
    cout << "\nTest1 / Test3 equals " << test1/test3;
    cout << "\nTest2 + Test3 equals " << test2+test3;
    cout << "\nTest3 - Test1 equals " << test3-test1;
    if (test1 == test2)
        cout << "\nTest1 is equal to Test2";
    if (test1 < test2)
        cout << "\nTest1 is less than Test2";
}