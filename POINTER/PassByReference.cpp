#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a,b;
    int* p1=&a;
    int* p2=&b;
    cout<<"enter first number : ";
    cin>>*p1;
    cout<<"enter second number : ";
    cin>>*p2;
    swap(&a,&b);
    cout<<a<<" "<<b;
}
