#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        {
            if(n%2==0)
            {
                if(i==n/2 || j==n/2)
                {
                    cout<<"*"<<" ";
                }
                else{
                    cout<<" "<<" ";
            }
            }
            else{
                if(i==n/2+1 || j==n/2+1)
                {
                    cout<<"*"<<" ";
                }
                else{
                    cout<<" "<<" ";
                }
                
            }
        }
        cout<<endl;
    }
}