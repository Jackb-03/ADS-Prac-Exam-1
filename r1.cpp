
#include <iostream>
using namespace std;


int sum_of_squares(int n, int res=0){

    if(n==0){
        return res;
    }

    return sum_of_squares(n-1, res+(n*n));



}




