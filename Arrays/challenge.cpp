#include<iostream>
using namespace std;
#include<climits>
int main()
{
    int a[7] = {1,5,3,4,3,5,6};
    // int pos;
    // int len = sizeof(a)/sizeof(a[0]);
    // for(int i =0;i<len-1;i++)
    // {
    //     for(int j=i+1;j<len;j++)
    //     {
    //         if(a[j]==a[i])
    //         {
    //             cout<<i;
    //              return 0;
    //         }
    //     }
    // }
    int indx[8];
    for(int i=0;i<8;i++)
    {
        indx[i] = -1;
    }

    int min = INT_MAX;
    for(int j=0;j<7;j++)
    {
        int temp = a[j];
        if(indx[temp] == -1)
        {
            indx[temp] = j;
        }
        else
        {
            if(indx[temp]<min)
            {
                min = indx[temp];
            }
        }
    }

   cout<<min;
    


}