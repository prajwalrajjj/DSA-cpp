#include<iostream>
using namespace std;
int main(){

    //4 7 10 ....AP
    int n;
    cout<<"no of terms in AP : ";
    cin>>n;
    int a=4;
    cout<<"AP series : ";
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a+3;
    }

}