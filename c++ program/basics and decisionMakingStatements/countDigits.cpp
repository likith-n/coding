#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    cout<<count<<endl;
}