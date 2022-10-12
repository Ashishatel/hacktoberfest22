#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={5,3,4,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    int key=11,ele=0;
    for(int i=0;i<n;i++){
        if(a[i]==key){
           ele++;
           break;
        }
        
    }
    if(ele==1)
       cout<<"elememt is found"<<endl;
    else 
       cout<<"element not found"<<endl;
    return 0;      
}