#include<stdio.h>
int main(){
    int a;
    printf("enter the value of side = ");
    scanf("%d",&a);
    float area=a*a;
    printf("Area of square with side %d is %f",a,area);
    return 0;
}