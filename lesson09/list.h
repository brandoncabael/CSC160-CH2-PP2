#ifndef "LIST_H"
#define "LIST_H"

#include <iostream>

using namespace std;

const int MAX_LIST_SIZE = 50;

class List {
    public:
    List( );
    double get_last();
    void delete_last();
    void get_list_data();
    
    private:
    double list[MAX_LIST_SIZE];
}

#endif