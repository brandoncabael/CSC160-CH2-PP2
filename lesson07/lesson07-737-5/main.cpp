#include <iostream>
#include <string>

using namespace std;


int main() { 

    void Authenticate::inputUserName();
    void Authenticate::inputPassword();
    string Authenticate::getUserName();
    string Authenticate::getPassword();
    
    inputUserName(); 
    inputPassword(); 
    cout << "Your username is " << getUserName() << " and your password is: " << getPassword() << endl; 
    return 0; 
}