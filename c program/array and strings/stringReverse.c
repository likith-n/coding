#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter the string = ");
    gets(str);
    puts(str);
    strrev(str);
    printf("string after reverse = ");
    puts(str);
      return 0;
    }