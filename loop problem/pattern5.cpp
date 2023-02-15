/*pyramid pattern -    *
                      ***
                     *****
                    *******  
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n,space;
    cout<<"enter the value of n:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(space=0;space<n-i-1;space++)
          { cout<<" ";
          }
        for(j=0;j<2*i+1;j++)
          {
             cout<<"*";   
          }
        cout<<endl;   
    }
}