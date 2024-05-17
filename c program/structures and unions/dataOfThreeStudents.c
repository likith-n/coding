#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int rollno;
    float cgpa;

};

int main(){
    struct student arr[3];
    for(int i=0;i<3;i++){
        printf("name = ");
        scanf("%s",&arr[i].name);
        printf("rollno = ");
        scanf("%d",&arr[i].rollno);
        printf("cgpa = ");
        scanf("%f",&arr[i].cgpa);
    }

    for(int i=0;i<3;i++){  
        printf("name = %s\n",arr[i].name);
        printf("rollno = %d\n",arr[i].rollno);
        printf("cgpa = %f\n",arr[i].cgpa);
    }
}