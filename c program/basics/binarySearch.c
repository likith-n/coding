#include<stdio.h>

void main()
{
    int i,a[100],data,mid,l,h,n,found=0;

    printf("eneter the size of an array=");
    scanf("%d",&n);
    printf("eneter the elements of an array\n");
       for(i=0;i<n;i++)
       {
        scanf("%d",&a[i]);

       }
       printf("enter the data = ");
       scanf("%d",&data);
       l=0,h=n-1;
       while(l<h)
       {
        mid=(l+h)/2;
        if(a[mid]==data)
        {
            printf("%d is found at the index %d",data,mid);
            found=1;
            break;
        }
        else if(data<a[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
       }
              if(found==0)
              {
                printf("dat is not found");
              }
          
}