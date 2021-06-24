#include<iostream>
using namespace std;

int numberofones(int n)
{
    int count =0;
    while(n)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}    


int main()
{
    int n,pos;
    cin>>n>>pos;

    cout<<numberofones(n)<<endl;
    //int result = getBit(n,pos);
    
}