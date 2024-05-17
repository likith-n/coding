#include<stdio.h>
void printHello(); // function prototype
void fun2();
void printHello(){   // function defination
    printf("hello world\n");
}
int main(){
    printHello();  // function call
    fun2();
    return 0;

}
void fun2(){
    printf("good bye");
}