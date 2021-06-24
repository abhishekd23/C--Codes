#include<iostream>
using namespace std;


int divisible(int n,int c,int d)
{
    // int coun =0;
    // int inter = 0;
    // int unio = 0;
    // for(int i=1;i<=n;i++)
    // {
    //     if(i % c == 0 && i % d == 0)
    //     {
    //         unio++;
    //     }
    //     else if(i % c == 0)
    //     {
    //         unio++;
    //     }
    //     else if(i % d  == 0)
    //     {
    //         unio++;
    //     }
    // }
    // return unio;

    int c1,c2,c3;
    c1 = n/c;
    c2 = n/d;
    c3 = n/(c*d);

    return c1+c2-c3;


}

int main()
{
    int n,a,b;
    cin>>n>>a>>b;

    cout<<divisible(n,a,b);
}