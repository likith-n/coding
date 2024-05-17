#include<stdio.h>
#include<string.h>
void salting(char password[]){
    char salt[100]="123";
    char newpassword[200];
    strcpy(newpassword,password);
    strcat(newpassword,salt);
    printf("newpassword = ");
    puts(newpassword);
}
int main(){
    char password[100];
    printf("enter the password = ");
    gets(password);
    salting(password);
}