#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    int ld,product=1;
    while(n!=0){
        ld=n%10;
        n=n/10;
        product = product * ld;
    }
    cout<<"product = "<<product<<endl;
}