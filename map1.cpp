#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
     map<int,string>m;
     m[1]="Raju";
     m[2]="Amit";
     m[6]="Rahul";
     m[4]="Shiv";
     m.insert({5,"Vikas"});
    //  map<int,string>::iterator it;
    //  for(it=m.begin();it!= m.end();it++)
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    
    //another way to print a map
    for(auto &pr :m)
       cout<<pr.first<<" "<<pr.second<<endl;


}