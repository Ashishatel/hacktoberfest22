#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countSum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=(n/i)*i;
    }
    return sum;

}
bool prime(int n)
{
    
    if (n <= 1)
        return false;
    if (n == 2)
        return true;    
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
int main(){
    int n;
    cin>>n;
    int num=countSum(n);
    cout<<num<<endl;
    if(prime(num))
       cout<<"ture"<<endl;
    else
       cout<<"false"<<endl;
    return 0;
}