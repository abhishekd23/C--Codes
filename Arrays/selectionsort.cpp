#include<iostream>
using namespace std;

int main()
{
    int a[5] = {34,22,1,54,19};
    int pos;
    int len = sizeof(a)/sizeof(a[0]);
    for(int i =0;i<len-1;i++)
    {
        int min = i;
        for(int j=i+1;j<len;j++)
        {
            if(a[min]>a[j])
            {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp; 
    }
    for(int i = 0;i<len;i++)
    {
        cout<<a[i]<<"\n";
    }


}