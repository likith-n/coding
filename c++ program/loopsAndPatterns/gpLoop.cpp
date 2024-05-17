#include<iostream>
using namespace std;
int main(){
    int i,a,m,n;
    cout<<"enter the nth term = ";
    cin>>n;
    cout<<"enter the initial number = ";
    cin>>a;
    cout<<"enter the multiplier = ";
    cin>>m;
       for(i=1;i<=n;i++){
        cout<<a<<" ";
        a = a*m;
       }
}