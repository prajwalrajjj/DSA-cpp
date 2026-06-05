#include<iostream>
using namespace std;
int main(){
    int a = 14; //dividend
    int b = 3;  //divisor
    int q = a/b;  //quotient
    int r;  // remainder
    //   //a=(b*q) + r 
    // r = a - (b*q);
    // cout<<r<<endl; 

    // or we can use modulus operator %
    r = a%b;
    cout<<r;
}