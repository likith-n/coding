#include<iostream>
using namespace std;
int main(){
    int n; // n= last term
    cout<<"enter the value of n = ";
    cin>>n;
    int a,d;
    cout<<"enter the initial number = ";
    cin>>a;
    cout<<"enter the difference = ";
    cin>>d;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a = a+d;
    }
}