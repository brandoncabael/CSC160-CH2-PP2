#ifndef LIST_H
#define LIST_H

#include <iostream>

using namespace std;

const int MAX_LIST_SIZE = 50;

class List {
    public:
    List();
    double get_last();
    void delete_last();
    void get_list_data();
    double get_address(int add);
    double add_value(int value);
    int get_size();
    bool is_full();
    
    private:
    double list[MAX_LIST_SIZE];
    int arr_size;
};

#endif