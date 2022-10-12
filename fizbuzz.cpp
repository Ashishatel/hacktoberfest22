#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
    {
        int n=15;
    vector<string> result;
    for(int i=1;i<=n;i++)
    {
        if(i%15==0)
        result.push_back("FizzBuzz");
        else if(i%5==0)
        result.push_back("Buzz");
        else if(i%3==0)
        result.push_back("Fizz");
        else
        result.push_back(to_string(i));
        
    }

    for(string x:result)
    cout<<x<<",";
    return 0;
}