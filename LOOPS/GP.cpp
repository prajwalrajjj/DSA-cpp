#include<iostream>
using namespace std;
int main(){

    //1 2 4 8....GP
    int a=1;
    int n;
    cout<<"no of terms in GP : ";
    cin>>n;
    cout<<"GP series : ";
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a*2;
    }

}