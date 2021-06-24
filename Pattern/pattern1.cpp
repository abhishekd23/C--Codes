#include<iostream>
using namespace std;



int main()
{
   int row=5 ,column = 5;
   int spaces=6;

   for(int i = 1;i<6;i++)
   {
       int a = 0;
       for(int k=1;k<=spaces;k++)
       {
           cout<<" ";
       }
       for(int m=1;m<=i;m++)
       {
           cout<<++a;
       }
       spaces = spaces-1;
       cout<<"\n";
   }
}