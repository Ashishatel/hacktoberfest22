#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=42,b=24;
    int rem=0;
    while(b>0){
        rem=a%b;
        a=b;
        b=rem;
    }
    cout<<a;
    return 0;
}