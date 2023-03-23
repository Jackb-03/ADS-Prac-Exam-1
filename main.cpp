#include "r1.h"
#include "r2.h"
#include "Bag.cpp"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    Bag<string> test;
    test.insertItem("3");
    test.insertItem("7");
    test.insertItem("10");
    test.insertItem("1");
    test.insertItem("2");


    test.removeItem();

    return 0;
}
