#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getOddOccure(int a[],int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j])
               count++;
        }
        if(count%2!=0)
           return a[i];
    }
    return 0;
}
int main(){
    int a[]={1,2,1,3,2,4,3,4,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<getOddOccure(a,n);
    return 0;
}