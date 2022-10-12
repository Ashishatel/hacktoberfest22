#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int>  &v){
    for(int i=0;i<v.size();i++)
       cout<<v[i]<<" ";
    cout<<endl;   
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vector<int> temp;
        for(int j=0;j<x;j++){
          int y;
          cin>>y;
          temp.push_back(y);
        }
        v.push_back(temp);
    }
     v[0].push_back(10);
    for(int i=0;i<n;i++){
        printVec(v[i]);
    }
    cout<<v[0][2];

}