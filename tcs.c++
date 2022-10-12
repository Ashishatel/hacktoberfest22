#include<bits/stdc++.h>
using namespace std;
int largest(vector<int>& heights) {
       vector<int>right;
        stack<pair<int,int>>s;
        int n=heights.size();
        for(int i=n-1;i>=0;i--){
            if(s.empty())
                right.push_back(n);
            else if(s.top().first<heights[i])
                right.push_back(s.top().second);
            else if(s.top().first>=heights[i]){
                while(s.size()>0&&s.top().first>=heights[i])
                    s.pop();
                 if(s.empty())
                  right.push_back(n);
               else if(s.top().first<heights[i])
                right.push_back(s.top().second);
            
            }
            s.push({heights[i],i});
        }
        reverse(right.begin(),right.end());
       stack<pair<int,int>>st;
        vector<int>left;
        for(int i=0;i<n;i++){
             if(st.empty())
                left.push_back(-1);
            else if(st.top().first<heights[i])
                left.push_back(st.top().second);
           
            else if(st.top().first>=heights[i]){
                while(st.size()>0&&st.top().first>=heights[i])
                    st.pop();
                if(st.empty())
                left.push_back(-1);
                else if(st.top().first<heights[i])
                left.push_back(st.top().second);
            
            }
            st.push({heights[i],i});
        }
        vector<int>res(n);
        for(int i=0;i<n;i++)
            res[i]=right[i]-left[i]-1;
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
            mx=max(mx,(heights[i]*res[i]));
            // cout<<left[i]<<" ";
        
//             
        
        return mx;
}
int main(){
  int n,b,h;
  cin>>n;
  cin>>b>>h;
  vector<int>v(n);
  for(int i=0;i<n;i++)
    cin>>v[i];
  
  int a=largest(v);
  int area=(a*b*h)%1000000007;
  cout<<area<<endl;
  return 0;
}
  
  
  
  
  