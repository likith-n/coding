#include<stdio.h>
int sum(int *x,int *y){
    int sum=*x +*y;
}
int product(int *x,int *y){
    int product=(*x) * (*y);
}
int average(int *x,int *y){
    int average=(*x )+(*y)/2;
}
void main(){
    int n,m;
    printf("enter the value of 1st number = ");
    scanf("%d",&n);
    printf("enter the value of 2nd number = ");
    scanf("%d",&m);
    int s=sum(&n,&m);
    int p=product(&n,&m);
    float a=average(&n,&m);
    printf("sum = %d\n",s);
    printf("product = %d\n",p);
    printf("average = %f\n",a);
}