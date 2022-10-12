#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findMejority(int a[],int n){
    int maxcount=0;
    int index=-1;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j])
               count++;
        }
        if(count>maxcount)
        {
            maxcount=count;
            index=i;
        }
    }
    if(maxcount>n/2)
       cout<<a[index]<<endl;
    else  
       cout<<"No majority ";
}
int main(){
    int arr[]={2,4,3,4,4,4,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    findMejority(arr,n);
    return 0;

}