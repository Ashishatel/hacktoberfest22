#include<iostream>
#include<bits/stdc++.h>
using namespace std;
stack<int> sortStack(stack <int>input){
    stack<int>tmpst;
    while(!input.empty()){
        int tmp=input.top();
        input.pop();
        while(!tmpst.empty() && tmpst.top() <tmp){
            input.push(tmpst.top());
            tmpst.pop();
        }
        tmpst.push(tmp);

    }
    return tmpst;
}
void sortarrayusingStack(int arr[],int n){
    stack<int>input;
    for(int i=0;i<n;i++)
       input.push(arr[i]);
    stack<int> tmpst=sortStack(input) ;
    for(int i=0;i<n;i++){
        arr[i]=tmpst.top();
        tmpst.pop();
    }  
}
int main(){
    int arr[]={4,6,3,9,7,19,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    sortarrayusingStack(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}