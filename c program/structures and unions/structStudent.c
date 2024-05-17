#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int rollno;
    float cgpa;

};

int main(){
    struct student s1;
    s1.rollno=3;
    s1.cgpa=9.4;
    strcpy(s1.name,"likith");

    printf("student name = %s\n",s1.name);
    printf("student rollno = %d\n",s1.rollno);
    printf("student cgpa = %f\n",s1.cgpa);
     
    return 0;
}