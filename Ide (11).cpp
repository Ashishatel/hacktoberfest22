#inlude<bits/stdc++.h>
using namespace std;
int dp[100001][3];

int solve(vector<int>cost[], int n, int i, int prev){ 
    if(i==n)return 0;

if(prev==-1){

int al cost[i][1]+solve(cost,n,i+1,1);

int a2=cost[i][2]+solve(cost,n,i+1,2);

int a3=cost[i][0]+solve(cost,n,i+1,0);

return min(al,min(a2, a3)); } else if(dp[i][prev]!=-1) return dp[i][prev];

else{

int mn=INT_MAX;

for(int j=0;j<=2;j++){ if(prev==j) continue; mn=min(mn, cost[i]

[j]+solve(cost,n,i+1, j));

return dp[i][prev]=mn;

}

}

int minCost(int N, vector<int> cost[]) { 
    memset(dp,-1,sizeof(dp));
    return solve(cost,N,0,-1);

}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        
    }
}