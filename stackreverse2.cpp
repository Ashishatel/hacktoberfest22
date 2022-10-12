#include<iostream>
#include<bits/stdc++.h>
using namespace std;
stack<int>sortstack(stack<int>& ip){
  stack<int>tmpst;
  while(!ip.empty()){
      int tmp=ip.top();
      ip.pop();
      while(!tmpst.empty() && tmpst.top() > tmp){
          ip.push(tmpst.top());
          tmpst.pop();
      }
      tmpst.push(tmp);
  }
  return tmpst;
}
int main(){
    stack<int>input;
    input.push(11);
    input.push(18);
    input.push(13);
    input.push(21);
    input.push(33);
     stack<int>tmp=sortstack(input);
     while(!tmp.empty()){
         cout<<tmp.top()<<" ";
         tmp.pop();
     }
    return 0;
}