//Brandon Cabael
//Lesson10, Page 498, PP 7
//Pig Latin Conversion

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string toPigLat(string first, string last);

void toLowCase(string& val);

bool isVowel(string ch);

void shiftString(string& val);

int main() {
    char cont;
    string first, last;
    
    do {
        cout << "Enter your first name: \n";
        cin >> first;
        cout << "Enter your last name: \n";
        cin >> last;
        string pig = toPigLat(first, last);
        cout << "Your name in pig latin is: " << pig << ".\n";
        cout << "Would you like to try a friend's name?";
        cin >> cont;
    } while (toupper(cont) == 'Y');
}

string toPigLat(string first, string last) {
    string pigName;
    
    if (isVowel(first)) {
        pigName = first + "way ";
    }
    
    else {
        toLowCase(first);
        shiftString(first);
        first[0] = toupper(first[0]);
        pigName = first + "ay ";
    }
    
    if (isVowel(last)) {
        pigName = pigName + last + "way ";
    }
    
    else {
        toLowCase(last);
        shiftString(last);
        last[0] = toupper(last[0]);
        pigName = pigName + last + "ay ";
    }
    
    return pigName;
}

void toLowCase(string& val) {
    for (int x = 0; x < val.length(); x++) {
        val[x] = tolower(val[x]);
    }
}

bool isVowel(string ch) {
    if (tolower(ch[0]) == 'a' || tolower(ch[0]) == 'e' || tolower(ch[0]) == 'i' || tolower(ch[0]) == 'o' || tolower(ch[0]) == 'u') {
        return true;
    }
    
    else {
        return false;
    }
}

void shiftString(string& val) {
    char temp =val[0];
    for(int x = 0; x < val.length(); x++)
    {
        val[x] = val[x + 1];
    }
    val.erase(val.length() - 1, 1);
    val = val + temp;
}