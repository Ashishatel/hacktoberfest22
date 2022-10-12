#include <iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;
struct Query{
    int L,R;
};
void printQuerySum(int a[],int n,Query q[],int m)
{
    for(int i=0;i<m;i++)
    {
    int L=q[i].L,R=q[i].R;
    int sum=0;
    for(int j=L;j<=R;j++)
       sum=sum+a[j];
    cout<<"sum of [" <<L<<","<<R<<"] is :"<<sum<<endl;  

        
    }
}
int main()
{
  int a[]={12,3,5,7,4,9,26};
  int n=sizeof(a)/sizeof(a[0]);
  Query q[]={{0,4},{1,3},{2,4}};
  int m=sizeof(q)/sizeof(q[0]);
  printQuerySum(a,n,q,m);
  
  return 0;
  
      /* code */
}
