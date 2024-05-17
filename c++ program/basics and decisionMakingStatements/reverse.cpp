#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    int ld,reverse=0;
    int i,sum=0;
    while(n!=0){                       
        ld=n%10;   
        n=n/10;
        reverse = reverse*10+ld;
        sum = sum+ld;
    }
    cout<<"reverse = "<<reverse<<endl;
    cout<<"sum = "<<sum<<endl;
}