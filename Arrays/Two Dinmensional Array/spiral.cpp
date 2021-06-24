#include<iostream>
using namespace std;

int main()
{
    
    int m = 4,n=4;
    int a[4][4];
    int rs = 0;
    int re = 3;
    int cs = 0;
    int ce = 3;
    for(int i =0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    while(rs<=re && cs<=ce)
    {
        for(int i = cs; i<=ce;i++)
        {
            cout<<a[rs][i];
        }
        rs++;
        for(int i = rs; i<=re;i++)
        {
            cout<<a[i][ce];
        }
        ce--;
        for(int i = ce; i>=cs;i--)
        {
            cout<<a[re][i];
        }
        re--;
        for(int i = re; i>=rs;i--)
        {
            cout<<a[i][cs];
        }
        cs++;
    }
    
    




}