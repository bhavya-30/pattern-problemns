/*pattern:   1
            121
           12321
          1234321
*/

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"enter the number of rows:";
    cin>>n;
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(k=0;k<n-i-1;k++)
          cout<<" ";
        for(j=0;j<i+1;j++)
          cout<<j+1;
         for(j=i;j>0;j--)
           cout<<j;   
          cout<<endl; 
    }
}