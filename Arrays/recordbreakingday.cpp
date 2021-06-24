#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int a[5];
        
    for(int i =0;i<n;i++)
    {
        cin>>a[i];   
    }

    // int pd=0;
    // int cd = a[1]-a[0];//1
    // int ans = 2;//length
    // int max = 2;
    int record;
    int max = -1;
    if( n ==1)
    {
        record = 1;
    }
    for(int k = 0;k<n-1;k++) // 1 2 2 2 2
    {
        
        if(a[k]>max)
        {
            max=a[k];
            if(a[k]>a[k+1])
            {
                record++;
            }
        }
    }
    
    cout<<record;
}


//1 5 3 8 1
//5 8