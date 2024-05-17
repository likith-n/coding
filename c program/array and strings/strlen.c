#include<stdio.h>
#include<string.h>

int main(){
    char a[40],b[40];
    printf("enter the string = ");
    gets(a);
   
    int l=strlen(a);
    printf("length of the string %s is =  %d ",a,l);
}