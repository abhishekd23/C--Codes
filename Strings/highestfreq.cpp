#include<iostream>
using namespace std;
#include<climits>
#include<string>
#include<algorithm>
 
int main()
{
    string a;
    getline(cin,a);
    int freq[26];
    
    for(int i =0;i<26;i++)
    {
        freq[i] = 0;
    }
    for(int j = 0;j<a.size();j++)
    {
        freq[a[j] - 'a']++;
    }
    
    char ans  = 'a';
    int maxS = 0;
    for(int i =0;i<26;i++)
    {
        if(freq[i]>maxS)
        {
            maxS = freq[i];
            ans = i+'a';
        }
    }
    cout<<maxS;
    cout<<ans;

}