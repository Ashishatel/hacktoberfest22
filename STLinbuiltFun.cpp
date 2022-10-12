#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    int min= *min_element(arr,arr+n);
    cout<<min<<endl;
    int max=*max_element(arr,arr+n);
    cout<<max<<endl;
    int sum=accumulate(arr,arr+n,0);
    cout<<sum<<endl;
    int ct= count(arr,arr+n,6);
    cout<<ct<<endl;
    auto *ptr= find(arr,arr+n, 1);
    if(ptr !=(arr+n))
       cout<< *ptr <<endl;
     else 
       cout<<"Element not found"<<endl;   
    reverse(arr,arr+n);
    for(auto val :arr)
        cout<<val<<" ";

    string s="sksksksk";
    reverse(s.begin(),s.end());
    cout<<s<<" ";        
}