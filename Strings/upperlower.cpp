#include<iostream>
using namespace std;
#include<climits>
#include<string>
 
int main()
{
    string a;
    getline(cin,a);
    
    for(int i = 0;i<a.size();i++)
    {
        if(a[i] >= 'a' && a[i]<='z')
        {
            a[i] = a[i]-32;
        }
    }
    cout<<a;
    


}