#include<stdio.h>
#include<string.h>
void count(char str[]){
    int count = 0;
    for(int i=0;str[i]!=0;i++){
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i'|| str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    printf("number of vowels in %s is %d",str,count);
}

int main(){
    char str[100];
    printf("enter the string = ");
    gets(str);
    count(str);
  
}