#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isOperand(char x){
    return (x>='a' && x<='z') || (x>='A' && x<='Z');
}
string postToInfix(string s){
    stack<string> st;
    int n=s.size();
    for(int i=0;s[i]!='\0';i++){
        if(isOperand(s[i])){
            string op(1,s[i]);
            st.push(op);
        }
        else{
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            st.push("(" + op2 + s[i] + op1 + ")");
        }
    }
    return st.top();
}
int main(){
    string s="ab*c+";
    cout<<postToInfix(s)<<endl; 
    return 0;
}