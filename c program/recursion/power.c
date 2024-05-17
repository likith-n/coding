#include<stdio.h>
void main(){
    int a,b;
    printf("enter the value of base = ");
    scanf("%d",&a);
    printf("enter the value of power = ");
    scanf("%d",&b);
    int p=pow(a,b);
    printf("power=%d",p);
}