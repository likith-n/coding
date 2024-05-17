#include<stdio.h>
void num(int n){
    if(n==0) return;
    num(n-1);
    printf("%d\n",n);
    return;
}
void main(){
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);
    num(n);
}