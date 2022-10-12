#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>v_p={ {1,2},{2,3}};
    for(auto &value : v_p)
         cout<<value.first<<" "<<value.second<<endl;
     return 0;    
}