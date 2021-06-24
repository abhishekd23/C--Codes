#include<iostream>
using namespace std;

int main()
{
   int row=5 ,column = 5;
   int spaces=6;

   for(int i = 1;i<row;i++)
   {
       for(int j=1;j<i+1;j++)
       {
            cout<<"*";
            
       }
       for(int k=1;k<=spaces;k++)
       {
           cout<<" ";
       }
       for(int m=1;m<=i;m++)
       {
           cout<<"*";
       }
       spaces = spaces-2;
       cout<<"\n";
   }
    spaces = 0;
   for(int i = 4;i>0;i--)
   {
       for(int j=i;j>0;j--)
       {
            cout<<"*";
            
       }
       for(int k=1;k<=spaces;k++)
       {
           cout<<" ";
       }
       for(int m=i;m>0;m--)
       {
           cout<<"*";
       }
       spaces = spaces+2;
       cout<<"\n";
   }



}