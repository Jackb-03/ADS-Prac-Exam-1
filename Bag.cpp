#include "Bag.h"
#include <iostream>
using namespace std;

template<class T>
void Bag<T>::insertItem(T newItem){
    type_arry.push_back(newItem);
}

template<class T>
void Bag<T>::removeItem(){
    int it = rand()%type_arry.size();
    type_arry.erase(type_arry.begin()+it);

}