#include<stdio.h>
int main(){
    int i,p,a[20],n;
    printf("enter the size of an array = ");
    scanf("%d",&n);
    printf("enter the elements of an array = ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value of p = ");
    scanf("%d",&p);
    if(p>n-1)
    {
        printf("deletion is not possible ");
    }
    else{
        for(i=(p-1);i<n-1;i++)
        {
            a[i]=a[i+1];
        }
    for(i=0;i<n-1;i++)
    {
        printf("%d  ",a[i]);
    }
    }
}