#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n =  ";
    cin>>n;
    int i;
    int f=1;
      for(i=1;i<n;i++){
          if(n%i==0){
            f=i;
          }
      }
      cout<<f<<" ";
}