#include <iostream>
using namespace std;


int stars(int n, string res=""){

    if(n==0){
        cout<<res<<endl;
        return 0;
    }
    return stars(n-1, res.append("*"));



}


