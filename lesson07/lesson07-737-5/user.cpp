#include <iostream>
#include <string>
#include <cstdlib>


namespace {

    using namespace std;

    string username;

    bool isValid () {
        return(username.length() == 8);
    }
}

namespace Authenticate { 

    using namespace std;

    void inputUserName() { 
        do { 
            cout << "Enter your username (8 letters only)" << endl; 
            cin >> username; 
        } while (!isValid()); 
    } 
    string getUserName() { 
        return username; 
    } 
}