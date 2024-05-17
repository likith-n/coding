#include<stdio.h>
int main(){
    int static n,rev=0,ld=0;
    printf("enter the number = ");
    scanf("%d",&n);
    int m=n;
    while(n!=0){
        ld=n%10;
        rev=rev*10;
        rev=rev+ld;
        n=n/10;
    }
    printf("reverse is %d\n",rev);
    if(m==rev){
        printf("the is given number is a palindrome");
    }
    else
    {
        printf("the given number is not a palindrame ");
    }


}