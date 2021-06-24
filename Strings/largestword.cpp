#include<iostream>
using namespace std;
#include<climits>
 
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int maxlen = INT_MIN;
    int count = 0;
    
    for(int i = 0;i<=n;i++)
    {
        if(a[i]== ' ' || a[i] =='\0')
        {
            //3
            maxlen = max(maxlen,count);
            count = 0;
        }
        else
        {
            count++;
        }
        

    }
    cout<<maxlen;


}