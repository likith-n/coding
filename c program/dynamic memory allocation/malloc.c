#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    int *ptr;
    printf("enter the value of n = ");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    printf("enter values = ");
            for(i=1;i<=n;i++){
                scanf("%d",&ptr[i]);
            }
    printf("enter values are =");        
            for(i=1;i<=n;i++){
                printf("%d\t",ptr[i]);
            }
            free(ptr);
return 0;

}