#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,k;
    cin>>n>>k ;
    vector<int>v(n) ;
    for(int i=0;i<n;i++) cin>>v[i] ;

    int i=0,j=0 ;
    int s=0 ;
    while(j<n){
       s+=v[j] ;
       if(s==k){
        cout<<i+1<<" "<<j+1<<endl ;
        break;
       }
       else if(s>k){
        while(s>k){
            s-=v[i] ;
            i++ ;
        }
         if(s==k){
        cout<<i+1<<" "<<j+1<<endl ;
        break ;
       }
      
    }
     j++ ;
    }
    return 0 ;
}