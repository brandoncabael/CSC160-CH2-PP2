#include "list.h"
#include <iostream>

using namespace std;

int main() {
    int TEST_COUNT = 50;
    double temp;
    
    List testList;
    
    cout << "Enter Value: (Terminate with -1)";

    try{
        for (int i = 0; i < TEST_COUNT; i++)
        {
            cin >> temp;
            if (temp < 0){
                break;
            }
            testList.add_value(temp);
        }
    }
    catch(int err){
        if(err==1){
            cout << "ERROR! ARRAY OVERFLOW! CANNOT ADD MORE!\n";
        }
    }
    
    cout << "\n\nThere are " << testList.get_size() << " values on the list";
    cout << "\nThe first value on the list is " << testList.get_address(0);
    cout << "\nThe last value on the list is " << testList.get_last();
    testList.delete_last();
    cout << "\nAfter deleting last value, there are " << testList.get_size() << " values left";
    cout << "\nThe new list is:\n";
    testList.get_list_data();
    while (!testList.is_full())
    {
        testList.add_value(100.0);
    }
    cout << "\n\nList filled up at size equal to " << testList.get_size();
}