#include<iostream>
using namespace std;

int main()
{
    int a[5] = {34,22,1,54,19};
    int pos;
    int len = sizeof(a)/sizeof(a[0]);
    for(int i =0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp; 
            }
        }
        
    }
    for(int i = 0;i<len;i++)
    {
        cout<<a[i]<<"\n";
    }


}