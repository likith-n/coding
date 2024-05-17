#include<stdio.h>
int main(){
    int i,j,a[50][50],b[50][50],c[50][50],n,m,k;
    printf("enter the number of rows = ");
    scanf("%d",&n);
    printf("enter the number of columns = ");
    scanf("%d",&m);
    printf("enter the elements of matrix a = ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of matrix a = ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
              c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("[");
        for(j=0;j<m;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("]\n");
    }
}