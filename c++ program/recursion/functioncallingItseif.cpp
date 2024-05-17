#include<iostream>
using namespace std;
void num(int n){
     if(n==0) return ;
     cout<<n<<endl;
     num(n-1);
}
int main(){
    int a;
    cout<<"enter the value of n = ";
    cin>>a;
    num(a);

}