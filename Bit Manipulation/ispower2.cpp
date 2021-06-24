#include<iostream>
using namespace std;

int ispower2(int n)
{
    return (n && !(n & n-1));
}    


int main()
{
    int n,pos;
    cin>>n>>pos;

    cout<<ispower2(n)<<endl;
    //int result = getBit(n,pos);
    
}