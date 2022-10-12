#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int fib(int n){
    int a=0,b=1,c;
    if(n<=1)
       return n;
    for(int i=2;i<=n;i++)
    {
      c=a+b;
      a=b;
      b=c;
 
    }
    return b;
}    
int main()
{
    int n=10;
    cout<<fib(n);
    return 0;

}