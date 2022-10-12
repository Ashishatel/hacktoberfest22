#include <iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;
int kthSmallest(int a[],int n,int k)
{
    set<int>s;
    for( int i=0;i<n;i++)
      s.insert(a[i]);
    auto it=s.begin();
    for( int i=0;i<k-1;i++)
     it++;
    return *it; 
}

int main()
{
  int a[]={12,3,5,7,4,9,26};
  int n=sizeof(a)/sizeof(a[0]);
  int k=5;
  cout<<"k'th smallest element is"<<kthSmallest(a,n,k);
  return 0;
  
      /* code */
}