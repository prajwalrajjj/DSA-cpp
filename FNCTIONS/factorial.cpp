#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"Factorial is "<<fact(n);
}