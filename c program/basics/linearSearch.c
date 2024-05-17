#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[100],n,data,found=0;
    printf("enter the size of an array = ");
    scanf("%d",&n);
    printf("enter the elements of an array \n");
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      printf("enter the data = ");
      scanf("%d",&data);
        for(i=0;i<n;i++)
        {
            if(a[i]==data)
            {
                printf("%d is found at index %d",data,i);
                found=1;
                break;
            }
        }
        if(found==0)
        {
            printf("element is not found ");

        }
      getch();  
}