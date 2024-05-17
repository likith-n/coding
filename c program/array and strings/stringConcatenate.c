#include<stdio.h>
#include<string.h>
int main(){
    char name1[20];
    char name2[30];
    printf("enter name1 = ");
    gets(name1);
    puts(name1);
    printf("enter name2= ");
    gets(name2);
    puts(name2);
    strcat(name1,name2);
    printf("concatenated string = ");
    puts(name1);

}