//  BUBBLE SORT

#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[5]={4,1,5,2,3};
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        n--;
    }
    n=5;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}