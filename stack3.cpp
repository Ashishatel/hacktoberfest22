#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
   int ele_top=st.top();
   st.pop();
   insertAtBottom(st,ele);
   st.push(ele_top);
}
void reverse(stack<int>&st){
    if(st.empty()){
        return;
    }
    int ele=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,ele);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;
}