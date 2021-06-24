#include<iostream>
using namespace std;
#include<climits>
#include<string>
#include<algorithm>
 
int main()
{
    string a;
    getline(cin,a);
    
    transform(a.begin(),a.end(),a.begin(),::toupper);
    cout<<a;
    


}