#include<iostream>
using namespace std;


int gcd(int c,int d)
{
    

    while(d !=0)
    {
        int temp = c%d;
        c = d;
        d = temp;
    }
    return c;


}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<gcd(a,b);
}