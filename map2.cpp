#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>&m){
    cout<<m.size()<<endl;
     for(auto &pr :m)
       cout<<pr.first<<" "<<pr.second<<endl;
}
int main(){
     map<int,string>m;
     m[1]="Raju";
     m[2]="Amit";
     m[6]="Rahul";
     m[4]="Shiv";
     m.insert({5,"Vikas"});
    
    // auto it=m.find(5);
    // if(it==m.end())
    //     cout<<"No Value";   
    // else
    //     cout<<(*it).first<<" "<<(*it).second<<endl;



    // m.erase(5);
    // print(m);
    
    m.clear();
    print(m);
   
}