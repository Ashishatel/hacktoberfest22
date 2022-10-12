#include<iostream>
#include<bits/stdc++.h>
#define n 100
using namespace std;

class stack
{
    int *arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"stack is overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(int x){
        if(top==-1){
            cout<<"no element to pop"<<endl;
            return;
        }
        top--;
    }
    int top(){
        if(top==-1){
            cout<<"no element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
int main()
{
    stack st;
    st.push(1);
    cout<<st.top()<<endl;
    return 0;
}