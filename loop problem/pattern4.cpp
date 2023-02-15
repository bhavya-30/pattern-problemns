/*triangular pattern- *****
                      ****
                      ***
                      **
                      *
*/

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n;  //n is number of rows
    cout<<"enter the value of n:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}