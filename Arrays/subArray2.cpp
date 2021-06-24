#include<iostream>
using namespace std;

int main()
{
    int a[5] = {1,2,3,7,8};
    int len = sizeof(a)/sizeof(a[0]);
    int st=0,end=0;
    //int k = 0;
    cout<<len<<endl;
    
    while(st!=len && end != len )
    {
        for(int i= st;i<=end ; i++)
        {
            cout<<a[i]<<" ";
        }

        cout<<endl;
        end++;
        if(end == len)
        {
            st++;
            end=st;
        }
    }
}