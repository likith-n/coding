#include<stdio.h>
int main(){
    int i,j,n,temp,a[100];
    printf("enter the size of an arry = ");
    scanf("%d",&n);
    printf("eneter the elements of an arr = ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
       for(i=0;i<n;i++)
       {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
       }
       printf("sorted elements\n");
       for(i=0;i<n;i++)
       {
        printf("%d   ",a[i]);
       }
}