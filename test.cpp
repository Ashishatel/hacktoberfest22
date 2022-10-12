#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    unordered_map<int,int>mpp;
	    for(auto a:str)
	       mpp[a]++;
	    int res=0;
	    for(auto a:mpp)
	       res+=a.second;
        int ans=res+mpp.size();   
	    cout<<ans<<endl;
	        
	}
return 0;
}
