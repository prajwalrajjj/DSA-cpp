#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter thr number : ";
    cin>>n;
    // bool flag=true;  //true means prime
    if(n==1) cout<<"1 is neither prime nor composite";
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<n<<" is a composite number";
        //    flag=false; //false means composite
            break;
        }
        else cout<<n<<" is a prime number";
        break;
    }
    // if(n==1) cout<<"1 is neither prime nor composite";
    // else if(flag==true) cout<<n<<" is a prime number";
    // else cout<<n<<" is a composite number";

}