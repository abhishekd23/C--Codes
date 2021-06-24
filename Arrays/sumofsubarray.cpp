#include<iostream>
using namespace std;

int main()
{
    int a[5] = {1,2,3,7,8};
    int len = sizeof(a)/sizeof(a[0]);
    int sum = 12;
    int curr = 0;
    int st=0,end=0;
    //int k = 0;
    for(int i =st;i<len;i++)
    {
        curr = curr + a[end];
        if(curr>sum)
        {
            curr-=a[st];
            st++;
        }
        else
        {
            end++;
        }
        
        if(curr == sum)
        {
            cout<<st<<"\n";
            cout<<end;
            return 0;
        }
    }
    //cout<<sum;
}