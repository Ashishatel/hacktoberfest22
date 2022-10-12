#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    int ans=0;

    if(m>n){
      ans=(m-n)+n;

    }
    else if(m<n)
        ans=(n-m)+n;
    else
        ans=n;    
   cout<<ans<<endl;
  } 
    return 0;
}