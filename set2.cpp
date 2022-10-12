#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(unordered_set<string> &s){
    for(auto value :s)
        cout<<value<<endl;
}
int main(){
    unordered_set<string>s ;
    s.insert("abc");
    s.insert("bnm");
    s.insert("ghj");
    s.insert("abc");

    auto it=s.find("abc");
    if(it != s.end())
       cout<<(*it)<<endl;
    
    print(s);
    
}