#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    int marks[n];
    cout << "Enter the marks of each student: ";
    for(int i=0; i<n; i++){
        cin >> marks[i];
    }
    cout << "Marks less than 35: ";
    for(int i=0; i<n; i++){
        if(marks[i] < 35){
            cout << i << " ";
        }
    }
    return 0;
}