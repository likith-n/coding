#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the numbers of rows = ";
    cin>>m;
    // int n;
    // cout<<"enter the numbers of column = ";               
    // cin>>n;                                            
    int i,j;                                            
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++){
            cout<< i<<" ";
        }
        cout<<endl;
    }
}
/*cout<<" * "  for printing *  
cout<<(char)(j+64)<< " "   for printing A B C
cout<<(char)(j+96)<< " "   for printing a b c
cout<<j<< " "   for printing 1 2 3
 */