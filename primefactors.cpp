#include<iostream>
using namespace std;

// void primeFactors()
// {

// }





int main()
{
    int n;
    cin>>n;
    int prime[n+1];
    // for(int i=2;i<n;i++)
    // {
    //     cin>>prime[i];
    // }
    for(int i=2;i<=n;i++)
    {
        prime[i] = 0;
    }

    for(int i = 2;i<=n;i++)
    {
        for(int j = i*i;j<=n;j= j+1)
        {
            if(j%i == 0 && prime[j] == 0)
            {
                prime[j] = i;
            }
        }
    }
    //int spf[n];
    for(int i=2;i<=n;i++)
    {
        if(prime[i] == 0)
        {
            prime[i] = i;

        }
    }
    while(n!=1)
    {
        cout<<prime[n]<<" ";
        n = n/prime[n];
    }


}