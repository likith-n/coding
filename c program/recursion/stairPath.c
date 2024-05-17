#include<stdio.h>
int stair(int n){
    if(n==1 || n==2  ) return n;
    return stair(n-2)+stair(n-1);
}
int main(){
    int n;
    printf("enter the number  = ");
    scanf("%d",&n);
    int ways=stair(n);
    printf("%d",ways);
    return 0;
}