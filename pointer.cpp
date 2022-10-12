#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void incre(int *a)
{
    *a++;
}
int main()
{
    int a=10;
    incre(&a);
    cout<<a<<endl;
    return 0;

}