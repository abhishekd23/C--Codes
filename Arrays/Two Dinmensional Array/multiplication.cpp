#include<iostream>
using namespace std;

int main()
{
    
    int m1,m2,n1,n2;
    cin>>m1>>n1>>m2>>n2;
    int a[m1][n1];
    int b[m2][n2];
    int c[m1][n2];

    for(int i =0;i<m1;i++)
    {
        for(int j = 0;j<n1;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\n";
    for(int i =0;i<m2;i++)
    {
        for(int j = 0;j<n2;j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i =0;i<m1;i++)
    {
        for(int j = 0;j<n2;j++)
        {
            //int sum = 0;
            c[i][j] = 0;
            for(int k = 0;k<n1;k++)
            {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                
            }
            
             cout<<c[i][j]<<endl;
        }
        cout<<endl;
    }
    // for(int i =0;i<m1;i++)
    // {
    //     for(int j = 0;j<n2;j++)
    //     {
    //         cout<<c[i][j]<<endl;
    //     }
    // }
    
}