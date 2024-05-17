#include<iostream>
using namespace std;
int main(){
    int n,r;
    cout<<"enter the value of n = ";
    cin>>n;
    cout<<"enter the value of r = ";
    cin>>r;
    int fact_n = 1;
    int fact_r=1;
    int fact_nr=1;
    for(int i=1;i<=n;i++){
        fact_n=fact_n * i;
    }
        cout<<"factorial of "<<n<<" = "<<fact_n<<endl;
    for(int i=1;i<=r;i++){
        fact_r=fact_r * i;
    }
        cout<<"factorial of "<<r<<" = "<<fact_r<<endl;
    for(int i=1;i<=n-r;i++){
        fact_nr=fact_nr * i;
    }
        cout<<"factorial of "<<n-r<<" = "<<fact_nr<<endl;
        int com=fact_n/(fact_r*fact_nr);
        cout<<"combination of "<<n <<" and "<< r <<" = "<<com<<endl;
}