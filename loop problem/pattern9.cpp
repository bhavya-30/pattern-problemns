/*pattern 121212
          212121
          121212
          212121
*/
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the number of rows n and columns m:";
    cin>>n>>m;
    //logic when i+j=even print 1 otherwise print 2
    for(int i=0;i<n;i++)
    { for(int j=0;j<m;j++)
        {
            if((i+j)%2==0)
               cout<<"1";
            else 
                 cout<<"2"; 
        }
        cout<<endl;
    }
}