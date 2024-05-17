#include<iostream>
using namespace std;
int maxOfTwo(int a,int b){ //contains many return statements
    if(a>b) return a;
    else return b;
}
int main(){
    cout<<maxOfTwo(2,3);
}