/*pattern - 123456
            123456
            123456
            123456
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n,m;
    cout<<"enter the number of rows amd columns:";
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        cout<<j+1;
        cout<<endl;
    }
}