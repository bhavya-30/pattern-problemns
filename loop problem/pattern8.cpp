/*pattern-123456
          1    6
          1    6
          123456
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n,m;
    cout<<"enter value of n and m:";
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        if(i==1||j==1||i==n||j==m)
        cout<<j;
        else
        cout<<" ";
        cout<<endl;

    }
    return 0;
}