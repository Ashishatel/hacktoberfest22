#include<iostream>
#include<bits/stdc++.h>
using namespace std;
# define n 3
void rotateMat(int arr[][n]){
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--)
           cout<<arr[i][j]<<" ";
        cout<<endl;   
    }
}
int main(){
    int mat[n][n]={{1,2,3},{4,5,6},{7,8,9}};
    rotateMat(mat);
    return 0;
}