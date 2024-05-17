#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int count=0;
    printf("enter the string name = ");
    gets(str);
    puts(str);
    for(int i=0;str[i]!=0;i++){
        count++;
    }
    // strlen(str);
    printf("%d",count);
}