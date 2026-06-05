#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int LD=0;
    int sum=0;
    while(n>0){
        LD=n%10;
        sum+=LD;
         n=n/10;
    }
    cout<<"sum of digits : "<<sum;
}