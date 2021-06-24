#include<iostream>
using namespace std;
#include<climits>
int main()
{
    int a[6] = {1,2,3,4,5,6};
    int indx[6];
    for(int i=0;i<6;i++)
    {
        indx[i] = -1;
    }

    int min = INT_MAX;
    for(int j=0;j<6;j++)
    {
        int temp = a[j];
        if(indx[temp] == -1)
        {
            indx[temp] = 0;
        }
    }
    for(int i =0;i<6;i++)
    {
        if(indx[i] == -1)
        {
            cout<<i;
            return 0;
        }
    }
    


}