#include<bits/stdc++.h>
// #include<unordered_set>
using namespace std;
int main()
{   int sum;
    cin>>sum;
    vector<int> a={2,2,4,5,6,1,77,88,98,54,33},result;
    unordered_set<int> b;
    for(int i=0;i<a.size();i++)
    {
        int x=sum-a[i];
        if(b.find(x)!=b.end())
        {
            result.push_back(x);
            result.push_back(a[i]);

        }
        b.insert(a[i]);

    }
    if(result.size()==0)
    cout<<"no such pairs";
    else
    cout<<result[0]<<" "<<result[1];
    // for(int i=0;i<result.size();i++)
    // cout<<"\n"<<result[i]<<" ";
    return 0;
}