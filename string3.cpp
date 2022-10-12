#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
  string s="6847894633";
  sort(s.begin(),s.end(),greater<char>());
  cout<<s<<endl;
  return 0;

}