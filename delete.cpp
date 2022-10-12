#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int s,int l,int key);
int deleteElement(int a[],int n,int key){
    int pos=binarySearch(a,0,n-1,key);
    if(pos==-1){
        cout<<"element not found"<<endl;
        return n;
       
    }
    for(int i=pos;i<n-1;i++)
        a[i]=a[i+1];
    return n-1;    
}
int binarySearch(int a[],int s,int l,int key){
    if(s>l)
      return -1;
        int mid=(s+l)/2;
        if(a[mid]==key)
           return mid;
        if(key>a[mid])
           return(a,mid+1,l,key);
        return(a,s,mid-1,key);      
    
}
int main()
{
  int a[]={10,20,35,40,45,50};
  int n=sizeof(a)/sizeof(a[0]);
  int key=35;
  for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
   cout<<endl; 
   n=deleteElement(a,n,key);
  for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
   return 0;  
}