#include<bits/stdc++.h>
using namespace std;
int fun(int n,vector<int>alice,vector<int>bob){
    sort(alice.begin(),alice.end(),greater<int>());
    sort(bob.begin(),bob.end(),greater<int>());
    int flag=0,i=0,j=0,as=0,bs=0;
    while(i<n&&j<n){
        if(flag==0){
            if(alice[i]>=bob[j]){
                as+=alice[i];
                i++;
            }
            else{
                 i++;
                 j++;
            }
            flag=1;
        }
        else if(flag==1){
            if(alice[i]<=bob[j]){
                bs+=bob[j];
                j++;
            }
            else{
                 i++;
                 j++;
            }
            flag=0;
        }
    }
    
   if(flag==0){
        while(i<n){
          as+=alice[i];
        i=i+2;
       }
   }
    if(flag==1){
        while(j<n)
    {bs+=bob[j];
    j=j+2;
    }
    }
    return as-bs;
}
int main(){
    int n;
    cin>>n;
    vector<int>alice(n);
    vector<int>bob(n);
    for(int i=0;i<n;i++)cin>>alice[i];
    for(int i=0;i<n;i++)cin>>bob[i];
    cout<<fun(n,alice,bob);
}