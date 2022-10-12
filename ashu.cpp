#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int n,int key){
    int s=0,l=n;
    while(l<=n){
        int mid=(s+l)/2;

        if(a[mid]==key)
          return mid;
        else if(a[mid]>key)
          l=mid-1;
        else if(a[mid]<key)
          s=mid+1;    
    }
    return -1;
}
int main()
{
    int a[]={2,4,5,6,9,11,17};
    int n = sizeof(a)/sizeof(a[0]);
    int key=11;
    cout<<binarySearch(a,n,key)<<endl;
}