#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>&m){
    cout<<m.size()<<endl;
     for(auto &pr :m)
       cout<<pr.first<<" "<<pr.second<<endl;
}
int main(){
    map<string,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        m[s]++;
       
    }
    for(auto pr : m){
       cout<<pr.first<<" "<<pr.second<<endl;
    }
    
}