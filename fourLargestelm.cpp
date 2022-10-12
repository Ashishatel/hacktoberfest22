#include <bits/stdc++.h>
using namespace std;
 
void findfourlargest(int arr[], int n)
{
    sort(arr, arr + n); 
    int count=1,sum=0;
    for (int i=1;i<=n;i++) {
        if(count<5) {
                cout<<arr[n-i] << " ";
                count++;
                sum+=arr[n-i];
        }
        else
            break;
    }
      cout<<endl<<sum;
}
int main()
{
    int arr[] = {1,1,1,-5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findfourlargest(arr, n);
    
}