//sorting and reversing of stack
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 void insert(stack<int> &s,int temp)
 {
     if(s.size()==0||s.top()<=temp){
     s.push(temp);
     return;
     }
     int x=s.top();
     s.pop();
     insert(s,temp);
     s.push(x);
 }
  void sort(stack<int> &s)
  {
      if(s.size()==1)
      return;
      int temp=s.top();
      s.pop();
      sort(s);
      insert(s,temp);
  }
  void insertbottom(stack<int> &s,int x){
      if(s.empty()){
      s.push(x);
      return;
      }
      int y=s.top();
      s.pop();
      insertbottom(s,x);
      s.push(y);
  }
  void reverse(stack<int> &s){
      if(s.empty())
      return;
      int x=s.top();
      s.pop();
      reverse(s);
      insertbottom(s,x);
      
  }
  
  
int main() {
	stack<int> s;
	s.push(4);
	s.push(0);
	s.push(9);
	s.push(7);
	s.push(45);
	sort(s);
	reverse(s);
	while(!s.empty())
	{
	    cout<<s.top()<<endl;
	    s.pop();
	}
	return 0;
}
