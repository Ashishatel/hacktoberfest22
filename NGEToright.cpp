#include<iostream>
#include<bits/stdc++.h>
using namespace std;
stack<int>st;
void nextGreatertoleft(int arr[],int res[],int n){
      st.push(0);
      res[0]=0;
      for(int i=1;i<n;i++){
          while(st.size()>0 && arr[st.top()]<=arr[i])
              st.pop();
          res[i]=(st.size()==0)?0 :st.top()+1;    
          st.push(i);
      }
}
void nextGreatertoright(int arr[],int res[],int n){
      st=stack<int>();
      int N=n;
      st.push(N-1);
      res[N-1]*=0;

      for(int i=N-2;i>=0;i--){
          while(st.size()>0 && arr[st.top()]<=arr[i])
              st.pop();
          res[i]=(st.size()==0)? res[i]*0 :res[i]*(st.top()+1); 
          st.push(i);   
      }
}
int maxProduct(int arr[],int res[],int n){
    nextGreatertoleft(arr,res,n);
    nextGreatertoright(arr,res,n);
    int Max=res[0];
    for(int i=1;i<n;i++)
        Max=max(Max,res[i]);
    return Max;    

}
int main(){
    int arr[]={5,4,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res[n];
    int maxprod=maxProduct(arr,res,n);
    cout<<maxprod<<endl;
    return 0;
}