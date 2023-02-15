/*numerical rectangular pattern - 1 2 3 4 5 6 7
                                  2 3 4 5 6 7 1
                                  3 4 5 6 7 1 2
                                  4 5 6 7 1 2 3
                                  5 6 7 1 2 3 4
                                  6 7 1 2 3 4 5
                                  7 1 2 3 4 5 6
*/

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n;
    cout<<"enter the number of rows n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            cout<<j<<" ";
        }
        for(j=1;j<=i-1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}