#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int minswap(int *a,int n,int k)
{
    int count =0;
    for(int i=0;i<n;++i)
       if(a[i]<=k)
         ++count;
    int bad=0;
    for(int i=0;i<n;++i)
       if(a[i]>k)
         ++bad;
    int ans =bad;
    for(int i=0,j=count;j<n;++i,++j)
     {
         if(a[i]>k)
           --bad;
         if(a[j]>k)
            ++bad;
        ans=min(ans,bad);
        
     }  
     return ans;
}

  int main()
 {
    int n,s;
    cin>>n;
    int a[]={2,1,5,6,3};
    n=sizeof(a)/sizeof(a[0]);
    s=3;
    cout<<minswap(a,n,s)<<endl;
    return 0;
}
