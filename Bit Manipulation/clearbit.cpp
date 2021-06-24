#include<iostream>
using namespace std;

int clearBit(int n, int pos)
{
    int mask = ~(1<<pos);
    return (mask & n);
}    


int main()
{
    int n,pos;
    cin>>n>>pos;

    cout<<clearBit(n,pos)<<endl;
    //int result = getBit(n,pos);
    
}