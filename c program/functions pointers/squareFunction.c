#include<stdio.h>
// Take nothing return something
int square(int a){
  return a*a;
}
void main(){
    int a;
    printf("enter the value of a = ");
    scanf("%d",&a);
    int s=square(a);
    printf("the square of %d is %d",a,s);
    return 0;
}