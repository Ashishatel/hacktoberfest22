#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str="hkhdkjhmmfsdkh";
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a'&&str[i]<='z')
           str[i]-=32;
    }
    cout<<str<<endl;
    for(int i=0;i<str.size();i++){
        if(str[i]>='A'&&str[i]<='Z')
           str[i]+=32;
    }
    cout<<str<<endl;
    //inbuilt function to convert upper to lower and lower to upper
    transform(str.begin(),str.end(),str.begin(), ::toupper);
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(), ::tolower);
    cout<<str<<endl;
    return 0;
}