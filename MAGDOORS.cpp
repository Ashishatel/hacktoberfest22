#include <bits/stdc++.h>
using namespace std;




int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int c=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='0'&&s[i-1]=='1'||s[i]=='1'&&s[i-1]=='0')
	        {
	            c++;
	        }
	        
	        
	    }
	    if(s[0]=='0')
	    cout<<c+1<<endl;
	    else
	    cout<<c<<endl;
	    
	}
	return 0;
}
