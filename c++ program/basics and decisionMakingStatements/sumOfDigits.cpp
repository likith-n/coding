#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    int ld,sum=0;
    int i;
    for(i=n;i>0;i--){    // while(n!=0)                     
        ld=n%10;   
        n=n/10;
        sum=sum+ld;
    }
    cout<<"sum = "<<sum<<endl;
}