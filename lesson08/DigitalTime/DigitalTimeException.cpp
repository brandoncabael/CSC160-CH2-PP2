#include <iostream>
#include <string>
#include "DigitalTimeException.h"

using namespace std;

DigitalTimeException::DigitalTimeException(int errNum, string whatWentWrong) {
    errorNumber = errNum;
    errorMessage = whatWentWrong;
}

string DigitalTimeException::errorMesReturn() {
    return errorMessage;
}

int DigitalTimeException::errorNumReturn() {
    return errorNumber;
}
