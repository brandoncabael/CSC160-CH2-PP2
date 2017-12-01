#include "list.h"
#include <iostream>

using namespace std;

List::List(){
    arr_size = 0;
}
double List::get_last(){
    return list[(arr_size - 1)];
}
void List::delete_last(){
    list[(arr_size - 1)] = 0;
    arr_size--;
}
void List::get_list_data(){
    for (int x = 0; x < arr_size; x++){
        cout << list[x] << " ";
    }
    cout << endl;
}
double List::get_address(int add){
    return list[add];
}
double List::add_value(int value){
    if(this->is_full()){
        throw(1);
    }
    list[arr_size] = value;
    arr_size++;
}
int List::get_size(){
    return arr_size;
}
bool List::is_full(){
    if (arr_size >= MAX_LIST_SIZE){
        return true;
    }
    else return false;
}