#include<iostream>
using namespace std;
/*   
   *
  ***
 *****
*******
*******
 *****
  ***
   *
*/

int main()
{
   int row=5 ,column = 5;
   int spaces=4;

   for(int i = 1;i<5;i++)
   {
       for(int k=1;k<spaces;k++)
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
    spaces = 0;
   for(int i = 4;i>0;i--)
   {
       for(int k=0;k<spaces;k++)
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
       spaces++;
       cout<<"\n";
   }
}