#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string> p;
   // p=make_pair(2,"abc");
   p={2,"abc"};
    cout<<p.first <<" "<<p.second<<endl;

    pair<int , int>p_aray[3];
    p_aray[0]={1,2};
    p_aray[1]={4,4};
    p_aray[2]={5,6};
    swap(p_aray[0],p_aray[2]);
    for(int i=0;i<3;i++)
       cout<<p_aray[i].first<<" "<<p_aray[i].second<<endl;
    


    pair<int,string> pa;
    cin>>pa.first;
    cout<<pa.first;
}