#include<bits/stdc++.h>
using namespace std;
bool dp[1001][1001];
bool subset(vector<int>&v,int p,int q){
     for(int i=0;i<p+1;i++){
        for(int j=0;j<q+1;j++){
            if(j==0)
            dp[i][j]=true;
            else if(i==0)
            dp[i][j]=false;
        }
    }
    for(int i=1;i<p+1;i++){
        for(int j=1;j<q+1;j++){
            if(j>=v[i-1]){
                dp[i][j]=dp[i-1][j-v[i-1]]||dp[i-1][j];
            }
            else 
            dp[i][j]=dp[i-1][j];
        }
    }
    return dp[p][q];
}

int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  int sum=0;
  for(int i=0;i<n;i++){
  cin>>v[i];
  sum+=v[i];
  }
  if(sum%2!=0)
  cout<<0;
  else
    cout<<subset(v,n,sum/2); //we will search subset sum s/2 because s is even then if first parttion is s/2 then second will also be s/2;
    return 0;
}