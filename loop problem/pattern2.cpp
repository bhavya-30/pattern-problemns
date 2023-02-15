/* hollow rectangle pattern- ******
                             *    *
                             *    *
                             ******
*/

#include<iostream>
using namespace std;
int main()
{
    int i,j;  //i=row and j=column
    int n,m; //n=number of rows and m=number of columns
    cout<<"enter the value of n and m:";
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=m;j++)
       {
        if(i==1||i==n||j==1||j==m)
        {
            cout<<"*";
        }
        else 
         cout<<" ";
       }
       cout<<endl;
    }
    return 0;
}