#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,k;
    cin>>n>>k;

    vector<int> p(n);
    for(int i=0;i<n;i++) cin>>p[i] ;
     vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i] ;


    vector<pair<double,int>> ans;
    for(int i=0;i<n;i++){
        ans.push_back({(1.0*v[i]/p[i]),i}) ;
    }
    sort(ans.begin(),ans.end(),greater<pair<double,int>>()) ;

    int sum =0 ,c=0, i = 0;
    while(i<n&&c<=k){
        int indx = ans[i].second ;
        if(c+p[indx]<=k){
            c+=p[indx] ;
            sum+=v[indx] ;
        }
        i++;
    }
   cout<<sum<<endl ;
   return 0;

}