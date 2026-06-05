#include<iostream>
using namespace std;
int main(){
    // volume of sphere = 4/3*(pi)*r^3*h
    float pi = 3.14;
    int r ;
    int h ;
    cout<<"enter values of r and h : ";
    cin>>r>>h;
    float volume;
    volume = 4/3*pi*r*r*r*h;
    cout<<"volume of sphere : "<<volume;
    //cout<<volume<<endl;
}