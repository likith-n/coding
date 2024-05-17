#include<stdio.h>
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
void main(){
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);
    int s=sum(n);
    printf("sum=%d",s);

}