#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of a = ";
    cin>>a;
    cout<<"square root of " <<a<<" = "<<sqrt(a)<<endl;
    cout<<"cube root of " <<a<<" = "<<cbrt(a)<<endl;
    int b,p;
    cout<<"enter the base number = ";
    cin>>b;
    cout<<"enter the power = ";
    cin>>p;
    cout<<"power = " <<pow(b,p)<<endl;
    cout<<"minimum = "<<min(b,p)<<endl;
    cout<<"maximum = "<<max(b,p)<<endl;
}