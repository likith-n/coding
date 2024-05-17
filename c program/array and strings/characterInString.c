#include<stdio.h>
#include<string.h>
void check(char str[],char cha){
    for(int i=0;str[i]!=0;i++){
     if(str[i]==cha){
      printf("character is presenrt");
      return;
     }
    
    }
printf("character is not present");
}
int main(){
    char str[100];
    char cha;
    printf("enter the string = ");
    gets(str);
    printf("enter the character to be search = ");
    scanf("%c",&cha);
    check(str, cha);
}