#include<iostream>
using namespace std;
void sum(int n){
    if(n==0) return ;
    sum(n-1);
    cout<<n;    
}
int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    sum(n);
}