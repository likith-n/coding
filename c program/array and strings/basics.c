#include<stdio.h>
int main(){
    int a[100],i,n;
    printf("enter the size of an array = ");
    scanf("%d",&n);
    printf("enter the elements of an array \n ");
       for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
       } 
    printf("The elements of an array is \n");   
       for(i=0;i<=n-1;i++){
        printf("%d\n",a[i]);
       }
return 0;
 
}