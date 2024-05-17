#include<stdio.h>
int sum(int ,int);
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("enter the value of a = ");
    scanf("%d",&a);
    printf("enter the value of b = ");
    scanf("%d",&b);
    int s=sum(a,b);
    printf("sum = %d",s);
    return 0;
}