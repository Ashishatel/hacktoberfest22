#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool comp(int a,int b)
{
    if((a>0&&b>0)||(a<0&&b<0)||(a>0)&&b<0)
        return false;
    if(a<0&&b>0)
        return true;
    if((a==0&&b<0)||(a>0&&b==0))
       return false;
    if((a==0&&b>0)||(a<0&&b==0))
       return true;           
}
void rearrange(int a[],int n)
{
    sort(a,a+n,comp);
}
int main()
{
    int a[]={-12,10,-13,-5,6,-7,5,-3,-6};
    int n=sizeof(a)/sizeof(a[0]);
    rearrange(a,n);
    for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
    return 0;
}
