/*rectangular patter -******
                      ******
                      ******
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n,m;   //n is number of rows and m is number of column
    cout<<"enter the value of n and m:";
    cin>>n>>m;
    for(i=0;i<n;i++)
    {for(j=0;j<m;j++)
    {
        cout<<"*";
    }
    cout<<endl;
    }
    return 0;
}