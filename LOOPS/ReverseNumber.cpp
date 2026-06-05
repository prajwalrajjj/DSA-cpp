#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int RN=0;
    int LD=0;
    while(n>0){
        RN*=10;
        LD=n%10;
        RN+=LD;
         n=n/10;
    }
    cout<<"Reverse of given no : "<<RN;
}