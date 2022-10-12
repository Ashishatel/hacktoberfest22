#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define r 4
#define c 4
void reverseColumns(int arr[r][c]){
    for(int j=0;j<c;j++)
       for(int i=0,k=c-1;i<k;i++,k--)
          swap(arr[i][j],arr[k][j]);
}
void transpose(int arr[r][c]){
    for(int i=0;i<r;i++)
       for(int j=i;j<c;j++)
          swap(arr[i][j],arr[j][i]);
}
void printMat(int arr[r][c]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
           cout<<arr[i][j]<<" ";
        cout<<endl;   
    }
}
void rotateMat(int arr[r][c]){
    transpose(arr);
    reverseColumns(arr);
}
int main(){
    int arr[r][c]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    rotateMat(arr);
    printMat(arr);
    return 0;
}