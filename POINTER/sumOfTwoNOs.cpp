#include<iostream>
using namespace std;
int main(){
    int a,b;
    int* p1=&a;
    int* p2=&b;
    cout<<"enter first number : ";
    cin>>*p1;
    cout<<"enter second number : ";
    cin>>*p2;
    cout<<"sum of two numbers : ";
    cout<<*p1+*p2;

}