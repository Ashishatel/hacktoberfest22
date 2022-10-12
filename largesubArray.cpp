#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxSubArray(int a[],int size)
{
    int max=INT_MIN;
    int max_end=0;
    for(int i=0;i<size;i++){
        max_end+=a[i];
        if(max<max_end)
            max=max_end;
        if(max_end<0)
            max_end=0;    
    }
    return max;
}
int main()
{
    int a[]={-1,-3,4,-1,-2,1,5,-3};
    int n=sizeof(a)/sizeof(a[0]);
    int max_sum=maxSubArray(a,n);
    cout<<max_sum<<endl;
    return 0;
}