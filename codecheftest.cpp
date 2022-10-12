#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int i, j, n, sum = 0,ev=0,od=0;
		cin >> n;
		int a[n+1];
		for (i = 1; i <= n; i++)
		{
			cin >> a[i];
			if(a[i]%2==0)
			ev++;
			else
			od++;
		}	
		if(n%2==0)
		{
			if(n/2>od)
			sum+=od;
			else
			sum+=n/2;

			if(n/2>ev)
			sum+=ev;
			else
			sum+=n/2;

		}
		else
		{  if(n/2+1>ev)
			sum+=ev;
			else
			sum+=n/2+1;
			if(n/2>od)	
			sum+=od;
			else
			sum+=n/2;
		}
		cout<<sum;
	}
	return 0;
}
