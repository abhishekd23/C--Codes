#include<iostream>
using namespace std;

int main()
{
    int a[8] = {2,4,7,11,14,16,20,21};
    int pos;
    int l = 0;
    int k;
    cin>>k;
    int len = sizeof(a)/sizeof(a[0]);
    int h = len-1;
    int sum =0;
    while(l<h)
    {
        sum = a[l]+a[h];
        if(sum<k)
        {
            l++;
        }
        else if(sum>k)
        {
            h--;
        }
        else
        {
            cout<<l<<" "<<h;
            break;
        }
    }
    cout<<"Not Found";


}