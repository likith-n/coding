#include<iostream>
using namespace std;
int fact(int x){
    cout<<fact<<endl;
    if(x==0) return 1;
    else return x*x-1;
}
int main(){
    int x;
    cout<<"enter the value of x = ";
    cin>>x;
    fact(x);
    
}