#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findMaxSum(int a[],int n){
    int res=INT_MIN;
    for(int i=0;i<n;i++){
        int prefix_sum=a[i];
        for(int j=0;j<i;j++)
            prefix_sum+=a[j];
        int sufix_sum=a[i];
        for(int j=0;j<i;j++)
            sufix_sum +=a[j];
        if(prefix_sum == sufix_sum)
           res=max(res,prefix_sum);        
    }
    return res;
}
int main()
{
    int a[]={-2,5,3,1,2,6,-4,2};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<findMaxSum(a,size);
    return 0;
}