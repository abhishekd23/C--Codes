#include<iostream>
using namespace std;
 
int main()
{
    char a[100];
    char b[100];
    cin>>a;
    int len = strlen(a);
    cout<<a<<"\n";
    bool check =1 ;
    for(int i = 0;i<len;i++)
    {
        if(a[i]!=a[len-1-i])
        {
            check = 0;
            break;
        }
    }
    if(check == true)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not a Palindrome";
    }


}