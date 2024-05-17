#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the number of rows = ";
    cin>>m;
    int i,j;
    for(i=1;i<=m;i++){
        for(j=i;j<=m;j++)
        {
            cout<<" "<<" ";
        }
         for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}