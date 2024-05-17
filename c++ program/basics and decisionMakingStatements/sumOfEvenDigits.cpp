#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    int ld,sum=0;
    while(n!=0){
        ld=n%10;
        n=n/10;
    if(ld%2==0){
        sum=sum+ld;
    }
    }
    cout<<"sum of even digits = "<<sum<<endl; 
    
}