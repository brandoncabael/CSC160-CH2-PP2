#include <iostream>
#include <string>

namespace {

    using namespace std;

    string password;
    int alphaChar;

    bool isValid() {
        for (int x = 0; x < password.length(); x++) {
            if (isalpha(password[x])) {
                alphaChar++;
            }
        }
        return((password.length() >= 8) && (alphaChar != password.length()));
    }
}

namespace Authenticate { 

    using namespace std;

    void inputPassword() { 
        do { 
            cout << "Enter your password (at least 8 characters " << 
            "and at least one nonletter)" << endl; 
            cin >> password; 
        } while (!isValid()); 
    } 
    string getPassword() { 
        return password; 
    } 
}