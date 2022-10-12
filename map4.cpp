#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// void print(unordered_map<int,string>&m){
//     cout<<m.size()<<endl;
//      for(auto &pr :m)
//        cout<<pr.first<<" "<<pr.second<<endl;
// }
int main(){
    unordered_map<string,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        m[s]++;
    }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
}