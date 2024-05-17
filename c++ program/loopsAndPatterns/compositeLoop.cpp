#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    int i;
    bool flag = true;
      for(i=2;i<n;i++){
        if(n%i==0){
             flag = false;
              break;
        }
        
      }
      if(n==1)  cout<<"neither prime nor composite";
      else if(flag==true)  cout<<"Prime";
      else  cout<<"Composite";
}     