#include<stdio.h>
int main(){
    int n,i,j,a[100];
    printf("enter the size of an array = ");
    scanf("%d",&n);
    printf("eneter the elements of an array = ");
       for(i=0;i<n;i++)
       {
        scanf("%d",&a[i]);
       }
       for(i=0;i<n;i++)
       {
        for(j=i+1;j<n;j++)
        {
           if(a[j]<a[i])
           {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
           }
        }
       }
       for(i=0;i<n;i++){
        printf("%d  ",a[i]);
       }
}