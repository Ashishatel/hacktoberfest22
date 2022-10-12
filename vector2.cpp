#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(7);
    v.push_back(8);
    //v.pop_back();
   
    vector<int> v2=v;  //o(n)
    v2.push_back(5);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" "<<endl;
    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";

}