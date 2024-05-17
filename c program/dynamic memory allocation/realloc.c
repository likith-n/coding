#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    int *ptr;
    printf("enter the value of n = ");
    scanf("%d",&n);
    ptr=(int *)calloc(n , sizeof(int));
    printf("enter the values =");
             for(i=1;i<=n;i++){
                scanf("%d",&ptr[i]);
             }
  
    printf("entered values are =");        
            for(i=1;i<=n;i++){
                printf("%d\t",ptr[i]);
            }
    ptr=(int*)realloc(ptr ,4);   //realloction of memory
    printf("\nenter the values =");        
            for(i=1;i<=4;i++){
                scanf("%d",&ptr[i]);
            }
             printf("\nenter values are =");        
            for(i=1;i<=4;i++){
                printf("%d\t",ptr[i]);
            }

            free(ptr);  // free the memory 
return 0;

}