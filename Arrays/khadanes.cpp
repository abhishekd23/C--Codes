#include<iostream>
using namespace std;
#include<climits>

int main()
{
    int a[5] = {-1,4,-6,7,-4};
    int len = sizeof(a)/sizeof(a[0]);
    //int k = 0;
    int currentsum[6];
    int maxSum =INT_MIN;
    currentsum[0] = 0;
    for(int i =1;i<=len;i++)// -1 4 -6 7 4
    {
        currentsum[i] = currentsum[i-1] + a[i-1]; //-1 
        if(currentsum[i]<0)
        {
            currentsum[i] = 0;
        }
        else
        {
            currentsum[i] = currentsum[i-1] + a[i-1];
        }
        maxSum = max(maxSum,currentsum[i]);
    }
    cout<<maxSum;
}