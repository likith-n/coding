#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"enter the cost price of the item = ";
    cin>>cp;
    int sp;
    cout<<"enter the selling price of the item = ";
    cin>>sp;
       if(sp>cp)
        {
          cout<<"profit";
        }
       else if (cp>sp)
       {
         cout<<"loss";
       }
       else
       {
          cout<<"no profit no loss";
       }
       
       
   
 
      
      
}