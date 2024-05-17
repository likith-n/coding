#include<stdio.h>
int main(){
    int a[50],i,n,p,m;
    printf("enter the size of an array=");
    scanf("%d",&n);
    printf("enter the elements of an array \n");
              for(i=0;i<n;i++){
                scanf("%d",&a[i]);
              }
    printf("enter the position p=");
    scanf("%d",&p);
    printf("enter the value to be inserted = ");
    scanf("%d",&m);
               for(i=(n-1);i>=(p-1);i--){
                a[i+1]=a[i];
                a[p-1]=m;
               }
               for(i=0;i<=n;i++){
                printf("%d\n",a[i]);
               }
return 0;
}