#include<iostream>
using namespace std;

int updateBit(int n, int pos,int value)
{
    int mask = ~(1<<pos);
    int clear = mask & n;
    return (clear | (value<<pos));
}    


int main()
{
    int n,pos,val;
    cin>>n>>pos>>val;

    cout<<updateBit(n,pos,val)<<endl;
    //int result = getBit(n,pos);
    
}