#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// void print(unordered_map<int,string>&m){
//     cout<<m.size()<<endl;
//      for(auto &pr :m)
//        cout<<pr.first<<" "<<pr.second<<endl;
// }
int main(){
    unordered_set<string> st;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        string str;
        cin>>str;
        st.insert(str);
    }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        if(st.find(s)==st.end())
           cout<<"NO"<<endl;
        else 
        cout<<"Yes"<<endl;   
    }
}