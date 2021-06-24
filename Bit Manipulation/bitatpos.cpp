#include<iostream>
using namespace std;

int getBit(int n, int pos)
{
    if((n&(1<<pos))!=0)
    {
        return 1;

    }
    else
    {
        return 0;
    }
}    


int main()
{
    int n,pos;
    cin>>n>>pos;

    int result = getBit(n,pos);
    if(result == 1)
    {
        cout<<"Bit at "<<pos<<" is 1";
    }
    else
    {
        cout<<"Bit at "<<pos<<" is 0";
    }
}