/* 
given N strings , print unique strings in lexigraphical order
N<+ 10^5
|s| <=100000
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

   set<string>s;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       string str;
       cin>>str;
       s.insert(str);
   }
   for(auto value :s)
       cout<<value<<endl;
}