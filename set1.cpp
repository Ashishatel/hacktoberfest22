#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for(string value:s)
       cout<<value<<endl;

    // for(auto it=s.begin();it!=s.end();it++)
    //     cout<<(*it)<<endl;   
}
int main(){
    set<string> s;
    s.insert("zsd");
    s.insert("dfgf");
    s.insert("abcde");
     s.insert("zsd");
    auto it=s.find("zsd");
    
    // if(it != s.end()){
    // //   cout<<(*it)<<endl;
    //     s.erase(it);
    // }

   s.erase("dfgf");
   print(s);
}