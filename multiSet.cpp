#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(multiset<string>&s){
    cout<<s.size()<<endl;
     for(auto pr :s)
       cout<<pr<<endl;
}
int main(){
     multiset<string>s; 
     s.insert("abc");
     s.insert("ghc");
     s.insert("dfc");
     s.insert("abc");
     auto it=s.find("abc");
    
     if(it != s.end()){
    //   cout<<(*it)<<endl;
        s.erase(it);
    }
    
    // s.erase("abc");
    print(s);
   
}