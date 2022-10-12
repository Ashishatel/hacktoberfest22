#include <bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int r){
    int b[r];
    int i=l;
    int j=mid+1;
    int k=0;
    while(i<=mid&&j<=r){
        if(a[i]<=a[j]){
            b[k]=a[i];
            i++;
        }
        else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=r){
        b[k]=a[j];
        j++;
        k++;
    }
    int s=0;
    for(int i=l;i<=r;i++){
        a[l]=b[s];
        s++;
    }
}

void mergesort(int a[],int l,int r){
    if(l<r){
    int m=(l+r)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge(a,l,m,r);
    }
}



int main()
{
    int a[5]={1,5,2,3,9};
    mergesort(a,0,4);
    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
    return 0;
}