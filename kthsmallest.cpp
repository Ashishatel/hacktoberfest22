#include <iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;
int partition(int a[],int l,int r,int k);
int findMedian(int a[],int n)
{
    sort(a,a+n);
    return a[n/2];
    
}
int kthSmallest(int a[],int l,int r,int k)
{
    if(k>0&&k<=r-l+1){
        int n=r-l+1;
        int i,median[(n+4)/5];
        for(i=0;i<n/5;i++)
            median[i]=findMedian(a+l+i*5,5);
        if(i*5<n){
            median[i]=findMedian(a+l+i*5,n%5);
            i++;
        }
        int midofmid=(i==1)?median[i-1]:kthSmallest(median,0,i+1,i/2);
        int pos=partition(a,l,r,midofmid);
        if(pos-1==k-1)
           return a[pos];
        if(pos-1>k-1)
           return kthSmallest(a,l,pos-1,k);
        return(a,pos+1,r,k-pos+r-1);
        
    }
    return INT_MAX;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 

int partition(int arr[], int l, int r, int x)
{
    
    int i;
    for (i=l; i<r; i++)
        if (arr[i] == x)
           break;
    swap(&arr[i], &arr[r]);
 
    
    i = l;
    for (int j = l; j <= r - 1; j++)
    {
        if (arr[j] <= x)
        {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}
int main()
{
  int a[]={12,3,5,7,4,9,26};
  int n=sizeof(a)/sizeof(a[0]);
  int k=5;
  cout<<"k'th smallest element is"<<kthSmallest(a,0,n-1,k);
  return 0;
  
      /* code */
}
