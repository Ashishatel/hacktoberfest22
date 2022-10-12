#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

int solve(vector<int>& v,unordered_map<int,int> vis,int i,int table){
        if(i>v.size())
            return 0;
        if(vis.size()==0){
            vis[v[i]]++;
            return table+solve(v,vis,i+1,table);
        }

        if(vis.find(v[i])==vis.end()){
            vis[v[i]]++;
            return solve(v,vis,i+1,table);
        }
        unordered_map<int,int> temp;
        temp[v[i]]++;
        vis[v[i]]++;
        return min(vis[v[i]]+solve(v,vis,i+1,table),table+solve(v,temp,i+1,table));

}

int main(){

    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    unordered_map<int,int> mp;
    cout<<solve(v,mp,0,k)<<endl;


}