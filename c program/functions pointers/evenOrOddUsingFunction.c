#include<stdio.h>
int eo(int a){
   if(a%2==0){
    printf("The number is even");

   }
   else{
    printf("The number is odd");
   }
}
void main(){
    int a;
    printf("enter the value of a = ");
    scanf("%d",&a);
    eo(a);
}