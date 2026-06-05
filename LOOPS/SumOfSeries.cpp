// 1-2+3-4+5-6.....upto n

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;
//     int sum=0;
//     int difference=0;
//     for(int i=1;i<=n;i+=2){
//         sum+=i;
//     }
//     for(int i=2;i<=n;i+=2){
//         difference-=i;
//     }
//     cout<<"total sum = "<<sum+difference;
// }

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int sum = 0;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            sum -= i;
        else
            sum += i;
    }

    cout << "Total sum = " << sum;

    return 0;
}