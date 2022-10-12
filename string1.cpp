#include <iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
   string s1="fan";
   string s2="ily";
   
   string s3=s1+s2;
   s1.append(s2);
   cout<<"Apend string "<<s1<<endl;
   cout<<s3<<endl;
   cout<<"Find character  :"<<s1[2]<<endl;
   string str="ajgdjfnehkdncbj";
   cout<<str<<endl;
   str.clear();
   cout<<"cleared string "<<str<<endl;
   cout<<"after compare"<<s2.compare(s1)<<endl;
   str.clear();
   if(str.empty())
      cout<<"string is empty"<<endl;

    string st="nincompoop";
    st.erase(3,4);
    cout<<"erase from string: "<<st<<endl;
    cout<<"find substring from string :"<<st.find("in")<<endl;
    st.insert(2,"lol");
    cout<<"Instered string :"<<st<<endl;
    cout<<st.size<<endl;
    cout<<"Length of string :"<<st.length<<endl;
    
    return 0;
}