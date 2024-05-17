#include<stdio.h>
int fact(int n){
    if(n==0 ) return 1;
    return n*fact(n-1);

}
void  main(){
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);
    int f=fact(n);
    printf("factorial of %d is %d",n,f);
}