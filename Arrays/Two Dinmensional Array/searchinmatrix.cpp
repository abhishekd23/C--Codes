#include<iostream>
using namespace std;

int main()
{
    
    int m1,n1,key;
    cin>>m1>>n1>>key;
    int a[m1][n1];

    for(int i =0;i<m1;i++)
    {
        for(int j = 0;j<n1;j++)
        {
            cin>>a[i][j];
        }
    }
    int r = 0,c=n1;
    while(r<m1 && c>0)
    {
        if(a[r][c] == key)
        {
            cout<<"Found";
            return 0;
        }
        else if(a[r][c]>key)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    // for(int i =0;i<m1;i++)
    // {
    //     for(int j = 0;j<n2;j++)
    //     {
    //         cout<<c[i][j]<<endl;
    //     }
    // }
    
}