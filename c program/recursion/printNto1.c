#include<stdio.h>
int num(int n){
    if(n==0) return;
    printf("%d\n",n); 
    return num(n-1);
    
 
}
void main(){
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);
    num(n);
}