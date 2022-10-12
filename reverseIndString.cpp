#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverseWord(string str)
{
    stack<char>st;
    for(int i=0;i<str.length();i++){
        if(str[i]!=' ')
            st.push(i);
        else{
            while(st.empty()==false){
                cout<<st.top();
                st.pop();
            }
            cout<<' ';
        }    
    }
    while(st.empty()==false){
        cout<<st.top();
        st.pop();
    }
}
int main(){
    string str="Geeks for Geeks";
    reverseWord(str);
    return 0;
}