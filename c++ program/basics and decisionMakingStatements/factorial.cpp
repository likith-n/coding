#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    int i,fact=1;
    for(i=1;i<=n;i++){
       fact*=i;
    cout<<"factorial of "<<i<<" = "<<fact<<endl;
    }

}