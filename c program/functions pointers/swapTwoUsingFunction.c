#include<stdio.h>
void swap(int a,int b){
 int temp=a;
 a=b;
 b=temp;
 printf("a=%d\nb=%d",a,b);
}
int main(){
    int x,y;
    printf("enter the value of 1st number = ");
    scanf("%d",&x);
    printf("enter the value of 2nd number = ");
    scanf("%d",&y);
    swap(x,y);
    
return 0;
}