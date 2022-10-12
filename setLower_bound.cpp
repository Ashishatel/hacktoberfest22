#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> a;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      a.insert(x);
    }
       
    auto it=a.upper_bound(7);
    if(it == a.end()){
        cout<<"Not found";
        return 0;
    }    
    cout<<(*it)<<endl;
}