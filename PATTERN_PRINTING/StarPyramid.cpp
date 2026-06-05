#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        //space ke liye
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //star ke liye
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}