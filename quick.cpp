#include <bits/stdc++.h>
using namespace std;
int part(int a[],int l,int r){
    int x=a[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    if(a[j]<=x){
        i++;
        swap(a[i],a[j]);
    }
    swap(a[i+1],a[r]);
    return i+1;
}
void quicksort(int a[],int l,int r){
    if(l<r){
    int p=part(a,l,r);
    quicksort(a,p+1,r);
    quicksort(a,l,p-1);
    }
}



int main()
{
    int a[5]={1,5,2,3,9};
    quicksort(a,0,4);
    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
    return 0;
}