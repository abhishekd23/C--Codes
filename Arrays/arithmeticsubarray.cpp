#include<iostream>
using namespace std;

int main()
{
    // int test_cases;
    // cin>>test_cases;
    
    //int sum = 0;
    //int k = 0;

    int n;
    cin>>n;
    int a[n];
        
    for(int i =0;i<n;i++)
    {
        cin>>a[i];   
    }

    int pd=0;
    int cd = a[1]-a[0];//1
    int ans = 2;//length
    int max = 2;
    

    for(int k = 1;k<n;k++) // 1 2 2 2 2
    {
        pd = cd;//1 0
        cd = a[k+1]-a[k]; // 0 0
        
        if(cd == pd)// 
        {
            ans++; // 
        }
        else
        {
            if(ans>max)
            {
                max = ans;//
                
            }
            ans = 2;
        }
    }
    
    cout<<max;
}