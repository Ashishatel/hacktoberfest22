#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
void alternativeSort(int arr[],int n)
{
    sort(arr,arr+n);
    int i=0,j=n-1;
    while(i<j){
        cout<<arr[j--]<<" ";
        cout<<arr[i++]<<" ";
    }
    if(n%2!=0)
       cout<<arr[i];
}
int main()
{
    int arr[]={1,12,6,4,7,3,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    alternativeSort(arr,n);
    return 0;
}