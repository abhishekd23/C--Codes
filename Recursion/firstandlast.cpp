#include<iostream>
using namespace std;


int firstoccur(int a[],int n,int i,int key)
{
    if(i == n)
    {
        return -1;
    }

    if(a[i] == key)
    {
        return i;
    }

    return firstoccur(a,n,i+1,key);
}

int lastoccur(int a[],int n,int i,int key)
{
    if(i == n)// 0 1 2 3 4 5 6
    {
        return -1;
    }
    int restarray = lastoccur(a,n,i+1,key);// 1 2 3 4 5 6 7
    if(restarray !=-1)
    {
        return restarray;
    }
    if(a[i] == key)
    {
        return i;
    }
    return  -1; 
}

int main()
{
    int arr[] = {4,2,1,2,5,2,7};
    cout<<firstoccur(arr,7,0,8)<<endl;
    cout<<lastoccur(arr,7,0,2);

}