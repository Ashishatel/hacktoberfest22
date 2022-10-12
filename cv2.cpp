#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
   
                int we = 1e6, fgfd = 1e8;
    bool aq = true;
     ll jio = -1;
    bool euwi = true;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (euwi and x == we and y != fgfd)
        {
            we = x;
            fgfd = y;
            euwi = false;
            aq = true;
            jio++;
        }
        else if (aq and y == fgfd and x != we)
        {
            we = x;
            fgfd = y;
            aq = false;
            euwi = true;
            jio++;
        }
        else if (y != fgfd and x != we)
        {
            we = x;
            fgfd = y;
            euwi = true;
            aq = true;
            jio++;
        }
        else
        {
            we = x;
            fgfd = y;
        }
    }
    cout << (jio + 1);
    return 0;
}