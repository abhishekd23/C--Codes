#include<iostream>
using namespace std;

int main()
{
    int a[2] = {1,2};
    int len = sizeof(a)/sizeof(a[0]);
    int sum = 0;
    //int k = 0;
    for(int i =0;i<len;i++)
    {

        for(int k = 0;k<len;k++)
        {
            for(int j=k;j<i+1;j++)
            {
                sum = sum + a[j];
                cout<<sum<<"\n";
            }
        }
        
}
    cout<<sum;
}