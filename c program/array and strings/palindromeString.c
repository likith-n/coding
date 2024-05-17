#include<stdio.h>
#include<string.h>
int main(){
    char a[20],b[20];
    printf("enter the string a = ");
    gets(a);
   
    strcpy(b,a);
    strrev(b);
    int l=strcmp(a,b);
         if(l==0)
         {
            printf("string is a palindrome ");
         }
         else{
            printf("string is not a palindrome ");
         }
         return 0;
}