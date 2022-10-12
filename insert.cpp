#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int insertSorted(int a[],int n,int key,int cap){
    if(n>=cap)
       return n;
    int i;
    for(i=n-1; (i>=0 && a[i]>key);i--){
        a[i+1]=a[i];
    }   
    a[i+1]=key;
    return (n+1);
}
int main()
{
    int a[20]={12,16,20,50,50,70};
    int capacity=sizeof(a)/sizeof(a[0]);
    int n=6;
    int key=26;
    for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
    cout<<endl;   
    n=insertSorted(a,n,key,capacity);
    for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
    return 0;   
}