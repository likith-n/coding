#include<stdio.h>
void printboard();
int checkwin();
void system();
char a[]={'0','1','2','3','4','5','6','7','8','9'};
void main(){
    

    int player=1,input,status=-1;
    printboard();
    
    while(status==-1)
    {
        player=(player%2==0)?2:1;
     char mark=(player==1)?'x':'o';
    
    printf("enter the box number for player %d=", player);
    scanf("%d",&input);
    if(input<1  || input>9)
    {
        printf("invalid input");
    }
    a[input]=mark;
   printboard();
   
   int result=checkwin();
   if(result==1){
    printf("player %d is the winner",player);
    return;
   }
   else if(result==0){
    printf("-------Match draw--------");
    return;
   }
   
   player++;
    }
    
}
void printboard()
{
    system("cls");
    printf("----TIC  TAC  TOE----\n\n");
    printf("      |     |     \n");
    printf("   %c  |  %c  |  %c  \n",a[1],a[2],a[3]);
    printf(" _____|_____|_____\n");
    printf("      |     |     \n");
    printf("   %c  |  %c  |  %c  \n",a[4],a[5],a[6]);
    printf(" _____|_____|_____\n");
    printf("      |     |     \n");
    printf("   %c  |  %c  |  %c  \n",a[7],a[8],a[9]);
    printf("      |     |     \n");
   
} 

int checkwin(){
    if(a[1]==a[2] && a[2]==a[3]){
        return 1;
    }
    if(a[4]==a[5] && a[5]==a[6]){
        return 1;
    }
    if(a[7]==a[8] && a[8]==a[9]){
        return 1;
    }
    if(a[1]==a[5] && a[5]==a[9]){
        return 1;
    }
    if(a[3]==a[5] && a[5]==a[7]){
        return 1;
    }
    if(a[1]==a[4] && a[4]==a[7]){
        return 1;
    }
    if(a[2]==a[5] && a[5]==a[8]){
        return 1;
    }
    if(a[3]==a[6] && a[6]==a[9]){
        return 1;
    }
    int count=0;
    for(int i=1;i<10;i++){
        if(a[i]=='x'  ||  a[i]=='o'){
            count++;
        }
    }
    if(count==9){
        return 0;
    }
    return -1;
}
 