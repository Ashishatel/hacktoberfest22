#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ispowerof2(int n){
    return (n && !(n&n-1));
}
int numberofOnce(int n)
{
    int count=0;
    while(n){
        n= n &(n-1);
        count++;
    }
    return count;
}
int main()
{
  //cout<<ispowerof2(16)<<endl;
  cout<<numberofOnce(29)<<endl;
  return 0;
}