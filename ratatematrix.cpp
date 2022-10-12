#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define r 4
#define c 4
void rotateMatrix(int mat[r][c],int n,int m)
{
    int row=0,col=0;
    int prev,curr;
    while(row<m && col<n){
        if(row+1==m ||col+1==n)
           break;
        prev=mat[row+1][col];
        for(int i=col;i<n;i++){
            curr=mat[row][i];
            mat[row][i]=prev;
            prev=curr;
        }   
        row++;
        for(int i=row;i<m;i++){
            curr=mat[i][n-1];
            mat[i][n-1]=prev;
            prev=curr;
        }
        n--;
        if(row<m){
            for(int i=n-1;i>=col;i--){
                curr=mat[m-1][i];
                mat[m-1][i]=prev;
                prev=curr;
            }
        }
        m--;
        if(col<n){
            for(int i=m-1;i>=row;i--){
                curr=mat[i][col];
                mat[i][col]=prev;
                prev=curr;
            }
        }
        col++;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }        
}


int main(){
    int mat[r][c]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    rotateMatrix(mat,r,c);
    return 0;
}