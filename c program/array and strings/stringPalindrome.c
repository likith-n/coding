#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    printf("enter the string = ");
    gets(a);
    strcpy(b,a);
    strrev(a);
    int l=strcmp(b,a);
          if(l==0){
            printf("The given string is palindrome\n");
          }
          else{
            printf("string is not a palindrome");
          }
    return 0;
}