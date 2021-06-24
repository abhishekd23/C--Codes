#include<iostream>
using namespace std;
/*
      1
     212
    32123
   4321234
  543212345
*/

int main()
{
   int row=5 ,column = 5;
   int spaces=4;

   for(int i = 1;i<6;i++)
   {
       int a = i;
       for(int k=1;k<=spaces;k++)
       {
           cout<<" ";
       }
       for(int m=1;m<=i;m++)
       {
           cout<<"*";
       }
       for(int m=2;m<=i;m++)
       {
           cout<<"*";
       }
       spaces = spaces-1;
       cout<<"\n";
   }
}