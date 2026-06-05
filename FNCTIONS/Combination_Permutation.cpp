#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}
int main(){
    int n,r;
    cout<<"enter value for n and r : ";
    cin>>n>>r;
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int ncrfact = nfact/(rfact*nrfact);
    int nprfact = nfact/nrfact;
    cout<<"combination is "<<ncrfact;
    cout<<"permutation is "<<nprfact;
}