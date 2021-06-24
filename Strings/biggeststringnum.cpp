#include<iostream>
using namespace std;
#include<climits>
#include<string>
#include<algorithm>
 
int main()
{
    string a;
    getline(cin,a);
    
    sort(a.begin(),a.end(),greater<int>());
    cout<<a;
    


}