#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    int a = *ptr;
    printf("%p\n",&age);
    printf("%d\n",*ptr);
    printf("%p\n",&ptr);
    printf("%d\n",a);
    printf("%d",*(&age));
}