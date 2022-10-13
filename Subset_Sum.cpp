
//count Subset sum Equals to SUM
#include<bits/stdc++.h>
using namespace std;

int subsetSum(int *arr, int n, int sum){
   
    //base case Recursive Approach
    if(i==n){
        if(sum==0){
            count++;
        }
        return count;
    }
    count = subsetSum(arr, n, i+1, sum-arr[i], count);
    count = subsetSum(arr, n, i+1, sum, count);
    return count; 

    //DP 
    int dp[n+1][sum+1];
    dp[0][0]=1;
    for(int i=1; i<=sum; i++){
        dp[0][i]=0;
    }
    for(int j=1; j<=n; j++){
        dp[j][0]=1;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=sum; j++){
            if(arr[i-1]<=j){
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}
int main(){
   int arr[] = {1, 4, 3, 2};
   int n = sizeof(arr) / sizeof(int);
   int sum = 5;
   // To print the output of counting the number of subsets
   cout <<subsetSum(arr, n, sum);

   return 0;
}