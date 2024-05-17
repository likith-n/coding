#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    int i;
       for(i=1;i<=n;i++){
        if(i==3 || i==5) continue;
        cout<<i<<" ";
       }
}