#include<stdio.h>
int main(){
    int n,i,a[100];
    int found=0,data;
    printf("enter the size of an array = ");
    scanf("%d",&n);
    printf("enter the elements of an arry = ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the data to be searched = ");
    scanf("%d",&data);
    //liner search
    for(i=0;i<n;i++){
    if(a[i]==data)
    {
        printf("data if found at the index %d",i);
        found=1;
        break;
    }
    }
    if(found==0)
    {
        printf("data is not found");
    }

}