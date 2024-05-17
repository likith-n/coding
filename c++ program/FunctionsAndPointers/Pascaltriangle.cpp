#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}
int ncr(int n,int r){
    return  fact(n)/(fact(r)*fact(n-r) );  
}

int main(){
    int m;
    cout<<"enter the number of rows = ";
    cin>>m;
    int i,j; 
    for(i=0;i<=m;i++){
        for(j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
  
}