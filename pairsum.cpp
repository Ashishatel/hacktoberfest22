#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool chkpair(int a[],int n,int x){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((a[i]+a[j])==x)
                 return 1;

        }
    }
    return 0;
}
int main(){
    int a[]={1,2,3,0,-1,-3,1};
    int x=-2;
    int size=sizeof(a)/sizeof(a[0]);
    if(chkpair(a,size,x))
       cout<<"valid pair exist";
    else 
       cout<<"valid pair not exit";
    return 0;

}