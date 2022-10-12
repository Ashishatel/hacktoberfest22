#include<bits/stdc++.h>
using namespace std ;
int fun(vector<int>v,int k){
    long long s=0 ;
    unordered_map<int,int>mp ;
    for(auto x:v)mp[x]++ ;
    int cnt = v.size() ;
    for(int i=1;i<1000000&&cnt<k;i++){
        if(mp.find(i)!=mp.end())
        {
            cout<<i<<" " ;
            s+=i ;
            cnt++;
        }
    }
    return cnt ;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n) ;
    for(int i=0;i<n ;i++) cin>>v[i] ;
    cout<<fun(v,k)<<endl ; ;
    return 0 ;
}