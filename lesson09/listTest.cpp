#include "list.h"
#include <iostream>

using namespace std;

int main() {
    int TEST_COUNT;
    double temp;
    
    List testList();
    
    for (int i = 0; i < TEST_COUNT; i++){
    cout << "Enter Value: ";
    cin >> temp;
    testList.add_value(temp);
    }
    
    cout << "\n\nThere are " << testList.get_size() << " values on the list";
    cout << "\nThe first value on the list is " << testList.get_address(0);
    cout << "\nThe last value on the list is " << testList.get_last();
    testList.deleteLast();
    cout << "\nAfter deleting last value, there are " << testList.get_size() << " values left";
    cout << "\nThe new list is:\n" << testList;
    while (!testList.is_full())
    {
        testList.add_value(100.0);
    }
    cout << "\n\nList filled up at size equal to " << testList.get_size();
}