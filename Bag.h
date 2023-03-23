#ifndef BAG_H
#define BAG_H
#include<vector>
#include <stdlib.h> 


template<class T>


class Bag
{
    private:
        std::vector<T> type_arry;
    public:
        void insertItem(T newItem);
        void removeItem();


};


#endif