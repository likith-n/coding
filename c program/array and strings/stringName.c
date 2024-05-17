#include<stdio.h>
int main(){
    // char firstname[50];
    char secondname[50];
    // printf("enter your name = ");
    // scanf("%s",&firstname);
    // printf("your name is %s",firstname);
    printf("\nenter your name = ");
    fgets(secondname,10,stdin);
    puts(secondname);
    return 0;
}