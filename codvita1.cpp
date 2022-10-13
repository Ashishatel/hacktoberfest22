#include <iostream>
#include <string>
#include <cstring>
#include<bits/stdc++.h>
using namespace std;

int main() {
string l,s,v,w,num;

getline(cin,l);
getline(cin,s);
transform(s.begin(), s.end(), s.begin(), ::tolower);
transform(l.begin(), l.end(), l.begin(), ::tolower);
map<char,int> mp;
for(int i=0;i<l.size();i++)
mp[l[i]]++;

for(auto x:mp)
{
    if(x.second>1)
    {
        cout<<"New language Error";
        return 0;
    }
}


for(int i=0;i<l.size();i++)
{
   
    for(int j=0;j<s.size();j++)
    {
        if(l[i]==s[j])
        v+=l[i];
    }
}
for (int i = 0; i < v.length(); i++) {  
        if (isdigit(v[i])) {
            num += v[i];
        }
}
for(int i = 0; i< v.length(); i++){
        if(isdigit(v[i])){
            v.erase(v.begin()+i);
            i--;
        }
    }

cout<<v<<" "<<num;
	return 0;
}
