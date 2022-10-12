#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        int c;
        cin >> c;
        v.push_back(c);
    }
    for (int i = 0; i < 10; i++)
        ++mp[v[i]];
    for (auto x:mp)
        cout << x.first << " " << x.second << "\n";
    return 0;
}
