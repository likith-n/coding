#include<stdio.h>
int main(){
    int n,i,sum,a,b;
    printf("enter the nth series = ");
    scanf("%d",&n);
    a=1,b=1,sum=0;
    for(i=0;i<n-2;i++)
    {
        
        sum=a+b;
        a=b;
        b=sum;
       
    }
    if(n==1||n==2){
       printf("sum of %d fibonacci series is = %d",n,1);
    }
    else{
    printf("sum of %d fibonacci series is = %d",n,sum);
    }
}