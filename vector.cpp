#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> v){
    cout<<"size:"<<v.size()<<" "<< endl;
    for(int i=0;i<v.size();i++)
      cout<<v[i]<<" ";
    cout<<endl; 
    }

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        printVec(v);
        v.push_back(x);
    }
    printVec(v);
}