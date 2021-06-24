#include<iostream>
using namespace std;
#include<climits>

int main()
{
    int a[4] = {-1,4,7,2};
    int len = sizeof(a)/sizeof(a[0]);
    //int k = 0;
    int currentsum[5];
    currentsum[0] = 0;
    for(int i =1;i<=len;i++)
    {
        currentsum[i] = currentsum[i-1] + a[i-1];
    }

    //int sum = 0;
    int maxi = INT_MIN;
    for(int i = 1;i<=len;i++)
    {
        int sum= 0;
        for(int k = 0;k<i;k++)
        {
            sum = currentsum[i] - currentsum[k];
            maxi = max(sum,maxi);
        }
    }
    cout<<maxi;
}