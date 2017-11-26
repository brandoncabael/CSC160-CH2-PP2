//Brandon Cabael

#ifndef DIGITALTIMEEXCEPTION_H
#define DIGITALTIMEEXCEPTION_H

#include <iostream>
#include <string>
using namespace std;

class DigitalTimeException {
public:
    DigitalTimeException(int errorNumber, string errorMessage);
    int errorNumReturn();
    string errorMesReturn();

private:
    int errorNumber;
    string errorMessage;
};

#endif