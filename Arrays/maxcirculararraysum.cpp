#include<iostream>
using namespace std;
#include<climits>

int main()
{
    int a[7] = {4,-4,6,-6,10,-11,12};
    int len = sizeof(a)/sizeof(a[0]);
    int maxSum = 0;
    int currentsum[8];
    int nonwrapSum =INT_MIN;
    int wrapsum = 0;
    int nonContributing = INT_MIN;
    currentsum[0] = 0;
    int sum = 0;
    for(int i =1;i<=len;i++)// -1 4 -6 7 4
    {
        sum = a[i-1]+sum;
        currentsum[i] = currentsum[i-1] + a[i-1]; //-1 
        if(currentsum[i]<0)
        {
            currentsum[i] = 0;
        }
        else
        {
            currentsum[i] = currentsum[i-1] + a[i-1];
        }
        nonwrapSum = max(nonwrapSum,currentsum[i]);
    }
    //cout<<nonwrapSum;
    int curr[8];
    curr[0] = 0;
    for(int i=0;i<len;i++)
    {
        a[i] = -1 * a[i];
    }
    for(int i =1;i<=len;i++)// -1 4 -6 7 4
    {
        curr[i] = curr[i-1] + a[i-1]; //-1 
        if(curr[i]<0)
        {
            curr[i] = 0;
        }
        else
        {
            curr[i] = curr[i-1] + a[i-1];
        }
        nonContributing = max(nonContributing,curr[i]);
    }

    wrapsum = sum + nonContributing;

    maxSum = max(nonwrapSum,wrapsum);
    cout<<maxSum;
}